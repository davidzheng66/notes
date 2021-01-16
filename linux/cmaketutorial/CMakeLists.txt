cmake_minimum_required(VERSION 3.10.1)

project(cmaketutorial VERSION 1.0)

configure_file(cmaketutorial_config.h.in cmaketutorial_config.h)

add_executable(${PROJECT_NAME} main.cpp)

target_include_directories(${PROJECT_NAME} PUBLIC ${PROJECT_BINARY_DIR})

#           DOWNLOAD ALL THE SUBMODULES
find_package(Git QUIET)
if(GIT_FOUND AND EXISTS "${PROJECT_SOURCE_DIR}/.git")
# Update submodules as needed
    option(GIT_SUBMODULE "Check submodules during build" ON)
    if(GIT_SUBMODULE)
        message(STATUS "Submodule update")
        execute_process(COMMAND ${GIT_EXECUTABLE} submodule update --init --recursive
                        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
                        RESULT_VARIABLE GIT_SUBMOD_RESULT)
        if(NOT GIT_SUBMOD_RESULT EQUAL "0")
            message(FATAL_ERROR "git submodule update --init failed with ${GIT_SUBMOD_RESULT}, please checkout submodules")
        endif()
    endif()
endif()

#           CHECK ALL THE SUBMODULES
###############################################################################
#if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/glfw/CMakeLists.txt")
#    message(FATAL_ERROR "The glfw submodules was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
#endif()
###############################################################################
if(NOT EXISTS "${PROJECT_SOURCE_DIR}/external/gtests/CMakeLists.txt")
    message(FATAL_ERROR "The googletest submodules was not downloaded! GIT_SUBMODULE was turned off or failed. Please update submodules and try again.")
endif()

add_subdirectory(Adder)
#add_subdirectory(external/glfw)


target_include_directories(${PROJECT_NAME} 
                        PUBLIC Adder)
 #                       PUBLIC external/gtests/googletest/include)

target_link_libraries(${PROJECT_NAME} adder)


add_subdirectory(Example)

############ For google tests ######
enable_testing()
add_subdirectory(external/gtests)
add_subdirectory(test)

