[Concurrent Programming with C++: Boqian](https://www.youtube.com/watch?v=LL8wkskDlbs&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=1)
[Other:Boqian] (https://boqian.weebly.com/c-programming.html)
# 1. [Processes Vs Threads](https://github.com/davidzheng66/notes/blob/master/C%2B%2B/C%2B%2B11Concurrency/src/001-introduction.cpp)
[Video](https://www.youtube.com/watch?v=f2nMqNj7vxE&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=1)
  * [Processes vs Threads](https://github.com/davidzheng66/Notes/blob/master/C++/C++11Concurrency/ProcessVsThreads.PNG?raw=true)
# 2. [Thread Management](https://github.com/davidzheng66/notes/blob/master/C%2B%2B/C%2B%2B11Concurrency/src/002-threadmanagement.cpp)
[Video](https://www.youtube.com/watch?v=f2nMqNj7vxE&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=2) 
1) There are 3 ways to pass parameters into threads:
  * by value
  * by reference
  * by move
2) Threads can't be copied, but can be moved
# 3. [Data Race and Mutex](https://github.com/davidzheng66/notes/blob/master/C%2B%2B/C%2B%2B11Concurrency/src/003-dataraceNmutex.cpp)
[Video](https://www.youtube.com/watch?v=3ZxZPeXPaM4&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=3)
1) Avoiding Data Race:
  * Using mutex to synchronize data access
  * Using RAII
  * Combine mutex and resources(e.g., std::cout) together, such as, class LogFile
  * Never leak a handle to outside
  * Never pass ofs as an argument to user provided functions
  * Design interfaces appropriately
  
# 4. Deadlock
[Video](https://www.youtube.com/watch?v=_N0B5ua7oN8&list=PL5jc9xFGsL8E12so1wlMS0r0hTQoJL74M&index=4)
1) Avoiding Deadlock:
  * Prefer locking single mutex
  * Avoid locking a mutex and then calling a user-provided function
  * Use std::lock() to lock more than one mutex
  * Lock the mutex in same order
2) Locking Granularity:
  * Fine-grained lock: protects small amount of data
  * Corse-grained lock: protects big amount of data

# 5. [Thread Pool Tutorial: How to : Code Blacksmith](https://github.com/davidzheng66/notes/blob/master/C%2B%2B/C%2B%2B11Concurrency/src/004-threadpool.cpp)
[Original Source Code from pastebin.com](https://pastebin.com/MM5kSvH6)
[Video](https://www.youtube.com/watch?v=eWTGtp3HXiw)
