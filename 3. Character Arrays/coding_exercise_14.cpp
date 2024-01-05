#include<iostream>
#include<string>
#include<algorithm>
#include<set>

/**
 * @brief Removes duplicate characters from a given string.
 * 
 * @param s The input string.
 * @return New string with duplicate characters removed.
 */
std::string removeDuplicate(std::string s)
{
    // Create a set<char> to store unique characters
    std::set<char> ss(s.begin(), s.end());
    
    // Create an empty string to store the result
    std::string str;

    // Iterate over the unique characters in the set and append them to the result string
    for (auto x : ss)
        str.push_back(x);

    // Return the result string without duplicates
    return str;
}

int main()
{
    std::string test_string = "geekforgeeks";
    std::string new_string = removeDuplicate(test_string);
    std::cout << new_string << std::endl;
}