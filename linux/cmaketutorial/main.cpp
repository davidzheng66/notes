#include <iostream>
#include <adder.hpp>
#include <cmaketutorial_config.h>

using namespace std;

int main(int argc, char* argv[]){
	cout << argv[0] << " Version " << CMAKETUTORIAL_VERSION_MAJOR << "." << CMAKETUTORIAL_VERSION_MINOR << endl;
	cout << "Hello World!!!" << endl;
	cout << add(10.0, 20.0) << endl;
}	