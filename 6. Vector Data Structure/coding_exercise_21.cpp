#include<vector>
#include<iostream>
#include<algorithm>
#include<string>

/**
 * @brief Compares two pairs based on the second element (price).
 * 
 * @param a The first pair.
 * @param b The second pair.
 * @return True if the price of the first pair is less than the price of the second pair, false if not.
 */
bool comparePrice(std::pair<std::string, int> a, std::pair<std::string, int> b) {
    return a.second < b.second;
}

/**
 * @brief Compares two pairs based on the first element (name).
 * 
 * @param a The first pair.
 * @param b The second pair.
 * @return True if the name of the first pair is lexicographically less than the name of the second pair, false if not.
 */
bool compareName(std::pair<std::string, int> a, std::pair<std::string, int> b) {
    return a.first < b.first;
}

/**
 * @brief Sorts a vector of pairs based on a specified criteria (price or name).
 * 
 * @param v The vector of pairs to be sorted.
 * @param S The sorting criteria ("price" or "name").
 * @return The sorted vector of pairs.
 */
std::vector<std::pair<std::string, int>> sortFruits(std::vector<std::pair<std::string, int>> v, std::string S) {
    if (S == "price") 
    {
        std::sort(v.begin(), v.end(), comparePrice);
    }

    if (S == "name") 
    {
        std::sort(v.begin(), v.end(), compareName);
    }

    return v;
}

int main() 
{
    std::vector<std::pair<std::string, int>> fruits = {{"Mango", 100}, {"Guava", 70}, {"Grapes", 40}, {"Apple", 60}, {"Banana", 30}};

    std::string sort_method = "name";
   
    std::vector<std::pair<std::string, int>> sorted_fruits = sortFruits(fruits, sort_method);

    for (std::pair<std::string, int> x : sorted_fruits) 
    {
        std::cout << x.first << " " << x.second << std::endl;
    }

    return 0;
}