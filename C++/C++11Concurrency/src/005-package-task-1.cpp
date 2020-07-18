// packaged_task example
#include<iostream>     // std::cout
#include<future>       // std::packaged_task, std::future
#include<chrono>       // std::chrono::seconds
#include<thread>       // std::thread, std::this_thread::sleep_for
#include<deque>
#include<mutex>

// count down taking a second for each value:
int countdown (int from, int to) {
  for (int i=from; i!=to; --i) {
    std::cout << i << '\n';
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  std::cout << "Lift off!\n";
  return from-to;
}

std::mutex eventMutex;
std::condition_variable condVar;

std::deque<std::packaged_task<int(int, int)> > task_q;

void worker(int from, int to){
    std::packaged_task<int(int, int)> task;
    {
        std::unique_lock<std::mutex> locker(eventMutex);
        condVar.wait(locker, [](){return !task_q.empty();});
        task = std::move(task_q.front());
        task_q.pop_front();
    }
    task(from, to);
}

int main ()
{ 
    std::thread th(worker, 10, 0);
    std::packaged_task<int(int,int)> tsk (countdown);   // set up packaged_task
    auto wrapper = std::make_shared<std::packaged_task<int(int,int)>>(std::move(tsk));

    std::future<int> ret = wrapper->get_future();       // get future
    {
        std::lock_guard<std::mutex> locker(eventMutex);
        task_q.push_back(std::move(*wrapper));
    }

    condVar.notify_one();

    int value = ret.get();                  // wait for the task to finish and get result

    std::cout << "The countdown lasted for " << value << " seconds.\n";

    th.join();

  return 0;
}

#if 0
std::mutex mu;
std::deque<std::packaged_task<int()> > task_q;

int factorial(int N) {
	int res = 1;
	for (int i=N; i>1; i--)
		res *= i;

	return res;
}

void thread_1() {
	for (int i=0; i<10000; i++) {
		std::packaged_task<int()> t;
		{
			std::lock_guard<std::mutex> locker(mu);
			if (task_q.empty()) 
				continue;
			t = std::move(task_q.front());
			task_q.pop_front();
		}
		t();
	}
}

int main() {
	std::thread th(thread_1);

	std::packaged_task<int()> t(std::bind(factorial, 6));  
	std::future<int> ret = t.get_future();
	std::packaged_task<int()> t2(std::bind(factorial, 9));
	std::future<int> ret2 = t2.get_future();
	{
		std::lock_guard<std::mutex> locker(mu);
		task_q.push_back(std::move(t));
		task_q.push_back(std::move(t2));
	}
	std::cout << "I see: " << ret.get() << std::endl;
	std::cout << "I see: " << ret2.get() << std::endl;

	th.join();
	return 0;
}
#endif
