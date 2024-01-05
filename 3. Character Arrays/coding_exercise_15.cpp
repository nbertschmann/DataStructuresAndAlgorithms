#include<string>
#include<iostream>

/**
 * @brief Extracts vowels from a given string.
 * 
 * @param S The input string.
 * @return A new string containing only the vowels from the input string.
 */
std::string vowel(std::string S){
    
    std::string new_string;
    
    for(char x : S)
    {
        if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
        {
            new_string.push_back(x);
        }
    }
    
    return new_string;
    
} 

int main()
{
    std::string s = "aeoibsddaeioudb";
    std::string result = vowel(s);
    std::cout << result << std::endl;
}