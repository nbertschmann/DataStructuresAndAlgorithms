#include <vector> 
#include <iostream>
#include <algorithm>

/**
 * @brief Find the Lower Bound of a Value in a Sorted Vector
 * 
 * This function takes a sorted vector of integers and a value as input
 * and finds the lower bound of the value using binary search. The lower
 * bound is the greatest element in the vector that is less than or equal
 * to the given value.
 * 
 * @param A The sorted input vector of integers.
 * @param Val The target value.
 * @return The lower bound of the target value in the vector.
 */
int lowerBound(std::vector<int> A, int Val) {
    
    int lower_bound = -1;
    int start = 0;
    int end = A.size() - 1;
    
    // Binary search to find the lower bound of the target value
    while(end >= start)
    {
        int mid = start + (end-start)/2;

        if(A[mid] <= Val)
        {
            start = mid+1;
            lower_bound = A[mid];
        }

        else
        {
            end = mid-1;
        }
    }

    return lower_bound;    
}

int main()
{
    // Example: create a sorted vector and find the lower bound of a test value (test_value)
    int test_value = 0;
    std::vector<int> arr = {-1, 2, 3, 5, 6};
    int lower_bound = lowerBound(arr, test_value);

    std::cout << "Lower Bound: " << lower_bound;
}