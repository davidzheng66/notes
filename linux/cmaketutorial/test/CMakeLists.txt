cmake_minimum_required(VERSION 3.10.1)

set(This ExampleTests)

set(Sources ExampleTests.cpp)

add_executable(${This} ${Sources})

target_include_directories(${This} 
                        PUBLIC ../Adder
                        PUBLIC ../Example)

target_link_libraries(${This} PUBLIC
  gtest_main
  adder
  example
) 

add_test(
    NAME ${This}
    COMMAND ${This}
)
