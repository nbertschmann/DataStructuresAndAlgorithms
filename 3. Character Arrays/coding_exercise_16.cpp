#include<string>
#include<iostream>
#include<cmath>
#include<algorithm>

/**
 * @brief Converts a binary string to its decimal equivalent.
 * 
 * @param s The binary input string.
 * @return The decimal representation of the binary string.
 */
int binaryToDecimal(std::string s)
{
    int ct = 0;
    int sum = 0;
    
    // Reverse the binary string for easier calculations
    std::reverse(s.begin(), s.end());
    
    // Iterate through each character in the reversed binary string
    for(char x : s)
    {
        if(x=='1')
        {         
            // If the character is '1', add 2^ct to the sum
            sum = sum + std::pow(2,ct);
        }        
        ct++;
    }
    return sum;
}

int main()
{
    std::string binary = "1101";
    int decimal = binaryToDecimal(binary);
    std::cout << decimal << std::endl;
}