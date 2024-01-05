#include<iostream>
#include<cstring>
#include<string>
#include<algorithm>

/**
 * @brief Check if a given string is a palindrome.
 * 
 * @param str The input string to be checked.
 * @return True if the string is a palindrome, false otherwise.
 */
bool isPalindrome(std::string str)
{
    int start = 0;
    int end = str.size()-1;

    while(end>start)
    {
        if(str[start] != str[end])
        {
            return false;
        }

        start++;
        end--;
    }

    return true;

}

int main()
{
    std::string testString = "abbda";

    if (isPalindrome(testString)) {
        std::cout << testString << " is a palindrome.\n";
    } else {
        std::cout << testString << " is not a palindrome.\n";
    }

}