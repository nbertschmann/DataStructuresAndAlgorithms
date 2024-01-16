#include<iostream>


void modify_var(int* var)
{
    // Modify the value through the pointer
    *var = 19;
    std::cout << "Inside function: "<< *var << std::endl;
}

int main()
{
    int val = 0;

    std::cout << "main: before changing value: "<< val << std::endl;
    
    modify_var(&val);
    
    std::cout << "main: after changing value: "<< val << std::endl;
}
