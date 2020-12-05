# 1. [gmock-matcher](https://github.com/google/googletest/blob/master/googlemock/docs/cheat_sheet.md#defining-matchers)
  * [Example 1](https://stackoverflow.com/questions/55547923/google-mocktesting-a-certain-property-of-an-object)
    * [source code](https://github.com/davidzheng66/notes/blob/master/C%2B%2B/matcherTest.cpp)
  * [Example 2](https://stackoverflow.com/questions/23938233/gmock-matching-structures)
# 2. [Parameterized tests](https://github.com/google/googletest/blob/master/googletest/docs/advanced.md)
  * [Example 1](https://www.sandordargo.com/blog/2019/04/24/parameterized-testing-with-gtest)
  * [Example 2](https://stackoverflow.com/questions/8971572/how-to-test-multi-parameter-formula)
    * [source code](https://github.com/davidzheng66/notes/blob/master/C%2B%2B/parameterizedTest.cpp)
# 3. [Atomic](https://en.cppreference.com/w/cpp/atomic/atomic)
  * [video](https://www.youtube.com/watch?v=ZQFzMfHIxng)
  * Explicit reads and writes
    std::atomic<T> x;
    T y = x.load; // Same as Ty = x;
    x.store(y); // Same as x = y
  * Atomic exchange:
    T z = x.exchange(y); // Atomically: z = x; x = y;
  * Compare-and-swap (conditional exchange)
    T& y;
    bool success = x.compare_exchange_strong(y, z);
    // if x == y, make x = z, and return true
    // Otherwise, set y = x, and return false
  
