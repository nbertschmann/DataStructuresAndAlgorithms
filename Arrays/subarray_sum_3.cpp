#include <iostream>
#include <algorithm>
using namespace std;

int largest_subarray_sum(int arr[], int n)
{
    int current_sum = 0;
    int max_sum = 0;

    for(int i=0; i < n; i++)
    {
        // Add the current element to the current sum
        current_sum = current_sum + arr[i];

        // If the current sum becomes negative, reset it to 0
        if(current_sum < 0)
        {
            current_sum = 0;
        }

        // Update the maximum sum if the current sum is greater
        max_sum = std::max(current_sum, max_sum);
    }

    return max_sum; 
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    const int n = sizeof(arr)/sizeof(int);

    int largest_sum = largest_subarray_sum(arr, n);
    cout << "Largest Sum: " << largest_sum;
}