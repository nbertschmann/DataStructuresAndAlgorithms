#include<string>
#include<iostream>
#include<algorithm>

/**
 * @brief Checks if two strings are permutations of each other.
 * 
 * @param A The first input string.
 * @param B The second input string.
 * @return True if A and B are permutations, False if not.
 */
bool arePermutation(std::string A, std::string B)
{
    // Check if the lengths are different, if so, they can't be permutations.
    if(A.length() != B.length())
    {
        return false;
    }

    // Sort both strings and compare.
    std::sort(A.begin(),A.end());
    std::sort(B.begin(),B.end());

    // If the sorted strings are equal, they are permutations.
    if(A==B)
    {
        return true;
    }

    return false;
}

int main()
{
    std::string A = "abfdc";
    std::string B = "abcd";

    bool ans = arePermutation(A,B);

    if(ans)
    {
        std::cout << "Is Permutation" << std::endl;
    }

    else
    {
        std::cout << "Is NOT Permutation" << std::endl;
    }
}