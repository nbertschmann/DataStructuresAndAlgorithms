#include<iostream>

// Given a sentence, count the number of alphabet characters, digits, and spaces in the sentence
int main()
{
    // store and then count
    // read one by one and then count
    char ch;
    ch = std::cin.get();

    int alpha = 0;
    int space = 0;
    int digit = 0;

    while(ch != '\n')
    {

        if(ch==' '|| ch =='\t')
        {
            space++;
        }

        if(ch >='0' && ch<='9')
        {
            digit++;
        }

        if((ch >='a' && ch<='z')||(ch >='A' && ch<='Z'))
        {
            alpha++;
        }

         ch = std::cin.get();
    }

    std::cout<<"SPACES: " << space << std::endl; 
    std::cout<<"DIGITS: " << digit << std::endl; 
    std::cout<<"ALPHA: " << alpha << std::endl; 

}