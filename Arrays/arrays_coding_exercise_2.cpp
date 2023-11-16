#include <vector>
#include <algorithm>
#include <iostream>

/**
 * @brief Find the Maximum Sum Subarray
 * 
 * This function takes a vector of integers as input and finds the maximum sum
 * of a subarray using Kadane's algorithm. 
 * 
 * @param A The input vector of integers.
 * @return The maximum sum of the vector's subarray.
 */
int maxSumSubarray(std::vector<int> A) {
    
    int current_sum = 0;
    int max_sum = INT_MIN;
    bool all_neg = true;

    // Account for case with all negative array elements
    for(int x : A)
    {
        if(x>0)
        {
            all_neg=false;
        }

        max_sum = std::max(max_sum, x);
    }

    if(all_neg)
    {
        return max_sum;
    }
    
    // Implement Kandanes algorithm
    for(int i=0; i< A.size(); i++)
    {
        current_sum = current_sum + A[i];
        
        if(current_sum < 0)
        {
            current_sum = 0;
        }
        
        max_sum = std::max(current_sum, max_sum);
    }
    
    return max_sum;
    
}

int main()
{
    // Example: Create a vector and find the maximum sum subarray
    // std::vector<int> input_arr = {5, 0, -1, 0, 1, 2, -1};
    std::vector<int> input_arr = {-5, 4, -1, 7, -9, -2, -1};
    int max_sum = maxSumSubarray(input_arr);
    std::cout << "Max Sum: " << max_sum;
}