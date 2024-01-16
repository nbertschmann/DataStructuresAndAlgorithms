#include<iostream>

void modify_var(int& var)
{
    // Modify the value by reference
    var = 19;
    std::cout << var << std::endl;
}

int main()
{
    int val = 0;
    std::cout << val << std::endl;
    modify_var(val);
    std::cout << val << std::endl;
}



