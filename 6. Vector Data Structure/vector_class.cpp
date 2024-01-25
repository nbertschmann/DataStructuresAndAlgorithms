#include<iostream>
#include"vector2.h"

// Test various methods of std::vector2 class (see vector2.h)
int main()
{
    Vector<char> v(2);
    std::cout << "Initial Capacity: " << v.capacity() << std::endl;
    v.push_back('a');
    v.push_back('b');
    v.push_back('c');
    std::cout << "Updated Capacity: " << v.capacity() << std::endl;
    std::cout << "Current Size: " << v.size() << std::endl;
    std::cout << "Front: " << v.front() << std::endl;
    std::cout << "Back: " << v.back() << std::endl;
    std::cout << "Value at index 1: " << v.at(1) << std::endl; 

    for(int i = 0; i < v.size(); i++)
    {
        std::cout << v[i] << " ";
    }

}