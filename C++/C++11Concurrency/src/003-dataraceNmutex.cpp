#include <iostream>
#include <fstream>
#include <thread>
#include <mutex>

using namespace std;

std::mutex mu;

///////////////////////////////////////////////////////////
#if 1 // case 2: Combine mutex and resource(cout) together
class LogFile{
    std::mutex m_mutex;
    ofstream ofs;
public:
    LogFile(){
        ofs.open("log.txt");
    }

    ~LogFile(){
        ofs.close();
    }

    void shared_print(string msg, int id){
        std::lock_guard<std::mutex> guard(mu); // RAII
        ofs << msg << ": " << id << endl;
    }

    #if 0
    // Never return ofs to the outside world
    ofstream& getStream(){
        return f;
    } 

    // Never pass ofs as an argument to user provided functions
    void processf(void func(ofstream&)){
        func(ofs);
    }
    #endif


};


void function_1(LogFile& log){
    for(int i = 0; i < 10; ++i){
       log.shared_print("From thread1: ", i);
    }
}

int main(){
    LogFile log;
    std::thread thread1(function_1, std::ref(log)); // thread1 starts running

    for(int i = 0; i < 10; ++i){
        log.shared_print("From main: ", i);
    }

    thread1.join();   

    return 0;
}
#endif // case 2

///////////////////////////////////////////////////////////
#if 0 // case 1: Use RAII, but mutex and resource(cout) are not combined together

void shared_print(string msg, int id){
    std::lock_guard<std::mutex> guard(mu); // RAII
    // mu.lock();
    cout << msg << id << endl;
    // mu.unlock();
}

void function_1(){
    for(int i = 0; i < 10; ++i){
       shared_print("From thread1: ", i);
    }
}

int main(){
    std::thread thread1(function_1); // thread1 starts running

    for(int i = 0; i < 10; ++i){
        shared_print("From main: ", i);
    }

    thread1.join();   

    return 0;
}
#endif // case 1
//////////////////////////////////////////////////