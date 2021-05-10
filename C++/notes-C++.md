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
  ```
    std::atomic<T> x;
    T y = x.load; // Same as T y = x;
    x.store(y); // Same as x = y
   ```
  * Atomic exchange:
  ```
    T z = x.exchange(y); // Atomically: z = x; x = y;
  ```
  * Compare-and-swap (conditional exchange)
  ```
    T& y;
    bool success = x.compare_exchange_strong(y, z);
    // if x == y, make x = z, and return true
    // Otherwise, set y = x, and return false
  ```  
# 4. Check endianess
* ```
  bool is_big_endian(){
    union {
      uint32_t i;
      char c[4];
    } bint = {0x01020304};
    
    return bint.c[0] == 1;
  }
  ```
# 5. [CMake Tutorial](https://cmake.org/cmake/help/latest/guide/tutorial/index.html)
* [CMake source code](https://github.com/Kitware/CMake)
* [Lecture source code](https://github.com/codetechandtutorials/OurLordAndSavior)
* [Lecture 1 - Understanding the Basics](https://www.youtube.com/watch?v=nlKcXPUJGwA&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=1)
  * Prerequisites:
    * gcc
    * cmake
  * Create "CMakeLists.txt" with:
    * CMAKE
    * Project
      * _project(gtests)_
      * _add_executable(${PROJECT_NAME} main.cpp)_
  * Build and Run:
    * mkdir ./out/build
    * Navigate to "out/build" --> cmake ../../ --> cmake --build .
    * Later navigate back to parent folder: _cmake -S 'Path-to-Source' -B 'Path-to-Build'_ (cmake -S . -B out/build)
    * Build: _make -C out/build_
    * Run: _out/build/gtests_
* [Lecture 2 - Subdirectories and Libraries](https://www.youtube.com/watch?v=kEGQKzhciKc&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=2)
  * add_subdirectory(Adder)
  * target_link_libraries(${PROJECT_NAME} adder)
  * target_include_directories(${PROJECT_NAME} PUBLIC Adder)
* [Lecture 3 - Git Submodules (adding glfw windowing library example)](https://www.youtube.com/watch?v=ED-WUk440qc&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=3)
* [Lecture 4 -Visioning Source Code](https://www.youtube.com/watch?v=K3bx7NYSXVk&list=PLalVdRk2RC6o5GHu618ARWh0VO0bFlif4&index=4)

# [Visual Studio Dynamic vs Static Runtimes](https://github.com/google/googletest/blob/master/googletest/README.md#visual-studio-dynamic-vs-static-runtimes )
By default, new Visual Studio projects link the C runtimes dynamically but GoogleTest links them statically. This will generate an error that looks something like the following: gtest.lib(gtest-all.obj) : error LNK2038: mismatch detected for 'RuntimeLibrary': value 'MTd_StaticDebug' doesn't match value 'MDd_DynamicDebug' in main.obj

GoogleTest already has a CMake option for this: gtest_force_shared_crt

Enabling this option will make gtest link the runtimes dynamically too, and match the project in which it is included.

# [C++ Standard Version](https://github.com/google/googletest/blob/master/googletest/README.md#c-standard-version)
An environment that supports C++11 is required in order to successfully build GoogleTest. One way to ensure this is to specify the standard in the top-level project, for example by using the set(CMAKE_CXX_STANDARD 11) command. If this is not feasible, for example in a C project using GoogleTest for validation, then it can be specified by adding it to the options for cmake via the DCMAKE_CXX_FLAGS option.

# [MQTT client programming reference](https://www.ibm.com/docs/en/ibm-mq/7.5?topic=m2m-mqtt-client-programming-reference)
  * [MQTT Tutorial](https://www.youtube.com/watch?v=TSwgZn2FKUw&list=PLS1QulWo1RIbQWue3zzwEuV2pSASiDxvv)
# [Protocol Buffer Basics: C++](https://developers.google.com/protocol-buffers/docs/cpptutorial)
