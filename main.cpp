#include "MyVector.h"

int main() 
{
    MyVector<int> v;
    std::cout<< "The current capacity is: " << v.capacity() << "\n";

    std::cout<< "Values set to: ";
    for(int i = 0; i<= 10; i++) {
        std::cout<< i<< " ";
        v.push_back(i);
    }
    std::cout<< "\nThe new capacity is: " << v.capacity() << "\n";

    std::cout<< "pop_back with parameter of 3 turns values into\n";
    v.pop_back(3);
    for(int i = 0; i< v.size(); i++) {
        std::cout<< v[i]<< " ";
    }

    std::cout<< "\nClear the array and check if its empty: ";
    v.clear(); 
    std::cout<< v.empty()<< "\n";

    return 0;
}