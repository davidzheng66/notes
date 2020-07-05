#include <iostream>
#include <thread>
using namespace std;

/////////////////////////////////////////////////////////
#if 1 // case 2

class Fnctor{
public:
    void operator()(string& msg){
        cout << "From t1: " << msg << endl;
        msg = "bye!";
    }
};

int main(){
    string mainMsg = "Hello World!";
    cout << "Max threads: " << thread::hardware_concurrency() << endl;
    cout << "Before running thread from main: " << mainMsg << endl;
    cout << "Main thread Id: " << this_thread::get_id() << endl;

    // std::thread thread1((Fnctor2()), mainMsg); // t1 starts running
    std::thread thread1((Fnctor()), ref(mainMsg)); // t1 starts running
    cout << "thread1 Id: " << thread1.get_id() << endl;

   // std::thread thread1((Fnctor2()), move(mainMsg)); // t1 starts running
    
    // std::thread thread2 = thread1; // NOK, no copy for threads is allowed
    std::thread thread2 = move(thread1); // OK, threads can be moved
    cout << "thread2 Id: " << thread2.get_id() << endl;

    thread2.join();
    
    cout << "After running thread from main: " << mainMsg << endl;

    return 0;
}
#endif // case 2

///////////////////////////////////////////////////////////
#if 0 // case 1

class Fnctor{
public:
    void operator()(){
        for(int i = 0; i < 10; ++i){
            cout << "From thread1: " << i << endl;
        }
    }
};

int main(){
 // Prevent stopping running a thread from exception
 // Way 1
    std::thread thread1((Fnctor())); // t1 starts running
    try{
        for(int i = 0; i < 10; ++i){
            cout << "From main: " << i << endl;
        }
    }catch(...){
        thread1.join();
        throw;
    }

    thread1.join();   
// Way 2 
// Wrapper w(thread1)

    return 0;
}
#endif // case 1
//////////////////////////////////////////////////