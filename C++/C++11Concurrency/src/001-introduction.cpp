// To compile: g++ --std=c++11 001-introduction.cpp -lpthread
#include <iostream>
#include <thread>
using namespace std;

void function_1(){
    std::cout << "Beauty is only skin-deep" << std::endl;
}

int main(){
    std::thread t1(function_1);
    // t1.join(); // main thread waits for t1 to fininsh
    t1.detach(); // t1 will run freely on its own -- as a daemon process

    // t1.join(); // crashes, since it is detached, but
    if(t1.joinable()){
        t1.join();
    }
    return 0;
}