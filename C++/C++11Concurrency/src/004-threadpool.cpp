#include <condition_variable>
#include <functional>
#include <iostream>
#include <future>
#include <vector>
#include <thread>
#include <queue>

class ThreadPool
{
public:
	using Task = std::function<void()>;

	explicit ThreadPool(std::size_t numThreads)
	{
		start(numThreads);
	}

	~ThreadPool()
	{
		stop();
	}

	template<class T>
	auto enqueue(T task)->std::future<decltype(task())>
	{
		auto wrapper = std::make_shared<std::packaged_task<decltype(task()) ()>>(std::move(task));

		{
			std::unique_lock<std::mutex> lock{mEventMutex};
			mTasks.emplace([=] {
				(*wrapper)();
			});
		}

		mEventVar.notify_one();
		return wrapper->get_future();
	}

private:
	std::vector<std::thread> mThreads;

	std::condition_variable mEventVar;

	std::mutex mEventMutex;
	bool mStopping = false;

	std::queue<Task> mTasks;

	void start(std::size_t numThreads)
	{
		for (auto i = 0u; i < numThreads; ++i)
		{
			mThreads.emplace_back([=] {
				while (true)
				{
					Task task;

					{
						std::unique_lock<std::mutex> lock{mEventMutex};

						mEventVar.wait(lock, [=] { return mStopping || !mTasks.empty(); });

						if (mStopping && mTasks.empty())
							break;

						task = std::move(mTasks.front());
						mTasks.pop();
					}

					task();
				}
			});
		}
	}

	void stop() noexcept
	{
		{
			std::unique_lock<std::mutex> lock{mEventMutex};
			mStopping = true;
		}

		mEventVar.notify_all();

		for (auto &thread : mThreads)
			thread.join();
	}
};

int main()
{
#if 0
    ThreadPool pool{36};

    for (auto i = 0; i < 36; ++i)
    {
        pool.enqueue([] {
            auto f = 1000000000;
            while (f > 1)
                f /= 1.00000001;
        });
    }
#endif

    std::mutex mu;

    std::cout << "Main thread Id: " << std::this_thread::get_id() << std::endl;
    std::cout << "hardware_concurrency: " << std::thread::hardware_concurrency << std::endl;
    
    ThreadPool pool{2};

    for(auto i = 0; i < 5; ++i){
        pool.enqueue([&](){
            for(auto j = 0; j < 100; ++j){
                std::lock_guard<std::mutex> lock(mu);
                std::cout << "i = " << i << ",j = " << j << ", thread id: " << std::this_thread::get_id() << std::endl;
            }
        });

    }


	return 0;
}