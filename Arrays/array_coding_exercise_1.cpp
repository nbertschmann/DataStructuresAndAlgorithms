#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief Find the Largest Element in a Vector
 * 
 * This function takes a vector of integers as input and finds the largest
 * element in the vector. 
 * 
 * @param arr The input vector of integers.
 * @return The largest element in the vector.
 */
int largestElement(std::vector<int> arr) 
{
    
    int largest_element = arr[0];
    
    
    for(int i = 0; i < arr.size(); i++)
    {
        largest_element = std::max(arr.at(i), largest_element);
    }
    
    return largest_element;
}

int main()
{
    // Example: Create vector and find largest vector element
    std::vector<int> input_arr = {5, 0, -1, 0, 1, 2, -1};
    int max_sum = largestElement(input_arr);
    std::cout << "Largest Element: " << max_sum;
}