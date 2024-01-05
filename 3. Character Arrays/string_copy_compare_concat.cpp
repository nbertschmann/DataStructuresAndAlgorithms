#include<iostream>
#include <cstring>

int main()
{
    char a[1000]= "apple";
    char b[1000];

    // length of string
    std::cout << std::strlen(a) << std::endl;

    // copy string
    std::strcpy(b,a);
    std::cout << b << std::endl;

    // compare string
    std::cout << strcmp(a,b) << std::endl;

    // concat strings
    char web[] = "www.";
    char domain[] = "codingminutes.com";
    std::cout << strcat(web,domain) << std::endl;
    
}