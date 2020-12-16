#include <iostream>
#include <set>

int main()
{
    std::set<int> set{0,1,2,3,4,5,6};
    std::cout << "Before removing 3" << std::endl;

    // wrong way to erase an element within range-based loop
    for (int i : set) {
        std::cout << i << std::endl;
        if (i == 3) {
            // std::cout <<"hello" << std::endl;
            i=set.erase(i);
        }
    }
    std::cout << "After removing 3" << std::endl;
    
    for (int i : set) {
        std::cout << i << std::endl;
    }

    std::cout << "Before removing 5" << std::endl;

    // right way to erase an element within normal loop
    for (auto i = set.begin(); i !=set.end(); ) {
        std::cout << *i << std::endl;
        if (*i == 5) {
            i=set.erase(i);
            // std::cout <<"hello" << std::endl;
        } else {
            ++i;
        }
    }
    
    std::cout << "After removing 5" << std::endl;

    // right way to erase an element within normal loop
    for (auto i = set.begin(); i !=set.end(); ) {
        std::cout << *i << std::endl;
        if (*i == 5) {
            i=set.erase(i);
            // std::cout <<"hello" << std::endl;
        } else {
            ++i;
        }
    }
}
