cmake_minimum_required(VERSION 3.10.1)

project(cmaketutorial)

add_executable(${PROJECT_NAME} main.cpp)

add_subdirectory(Adder)
#add_subdirectory(external/glfw)
add_subdirectory(external/gtests)

target_include_directories(${PROJECT_NAME} PUBLIC Adder)

target_link_libraries(${PROJECT_NAME} adder)
