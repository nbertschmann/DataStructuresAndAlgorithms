#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief Find the Pair with Closest Sum to a Target
 * 
 * This function takes a vector of integers and a target sum as input and 
 * finds the pair of elements with the closest sum to the target. 
 * 
 * @param arr The input vector of integers.
 * @param x The target sum.
 * @return A pair of integers representing the pair with the closest sum.
 */
std::pair <int, int> closestSum(std::vector<int> arr, int x)
{
    int start = 0;
    int end = arr.size() - 1;

    int current_sum = 0;
    int current_diff = 0;
    int smallest_diff = INT_MAX; 
    
    // Initialize the result pair to store the elements with the closest sum
    std::pair<int, int> result; 

    // Iterate through the array to find the pair with the closest sum to the target
    while (start < end) 
    {
        // Check if the array has less than 2 elements, return an invalid pair
        if (arr.size() < 2)
        {
            return {-1, -1};
        }
        
        // Calculate the current sum and difference
        current_sum = arr[start] + arr[end];
        current_diff = abs(current_sum - x);

        // Update the result pair if the current difference is smaller than the smallest difference
        if (current_diff < smallest_diff)
         {
            smallest_diff = current_diff;
            result = {arr[start], arr[end]};
        } 

        // Adjust indices based on the comparison of current sum and target sum
        if (current_sum < x) 
        {
            start++;
        } 
        
        else {
            end--;
        }
    }

    return result;
}

int main()
{
    // Example: Create vector and find the pair with the closest sum to x
    std::vector arr = {10, 22, 28, 29, 30, 40};
    int x = 54;
    std::pair<int, int> ans = closestSum(arr, x);
    int sum = ans.first + ans.second;

    std::cout << "closest sum: " << ans.first << " + " << ans.second << " = " << sum;
}