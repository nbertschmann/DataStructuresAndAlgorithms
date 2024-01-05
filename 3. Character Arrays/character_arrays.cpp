#include <iostream>
#include <cstring>

int main() {
    char a[] = {'a','b','c','d', '\0'};
   
    std::cout << a << std::endl;
    std::cout << std::strlen(a) << std::endl; //number of visible characters
    std::cout << sizeof(a) << std::endl; // counts all characters including null character
   
    char b[100];
    std::cin >> b;
    std::cout << b << std::endl;
}
