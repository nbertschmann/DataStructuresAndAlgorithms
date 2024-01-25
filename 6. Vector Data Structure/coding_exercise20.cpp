#include<vector>
#include<iostream>
#include<algorithm>
#include<cmath>

/**
 * @brief Calculate the total distance of a pair of coordinates.
 *
 * @param coords A pair of integers representing the x and y coordinates.
 * @return The total distance from the origin.
 */
double calculate_distance(std::pair<int, int> coords){
    return sqrt(std::pow(coords.first, 2) + std::pow(coords.second, 2));
}

/**
 * @brief Compares two pairs of coordinates based on their total distance.
 *
 * @param s1 The first pair of coordinates.
 * @param s2 The second pair of coordinates.
 * @return True if the distance of s1 is less than the distance of s2, false otherwise.
 */
bool compare(std::pair<int, int> s1, std::pair<int, int> s2){
    return calculate_distance(s1) < calculate_distance(s2);
}

/**
 * @brief Sorts a vector of pairs of coordinates based on their Euclidean distance.
 *
 * @param v Vector of pairs representing coordinates.
 * @return Sorted vector based on Euclidean distance.
 */
std::vector<std::pair<int, int>> sortCabs(std::vector<std::pair<int, int>> v){
    std::sort(v.begin(), v.end(), compare);
    return v;
}

int main(){
    std::vector<std::pair<int, int>> cabs = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};
    std::vector<std::pair<int, int>> result = sortCabs(cabs);

    for(std::pair x : result){
       std::cout << x.first << ", " << x.second << std::endl;
    }

    return 0;
}

