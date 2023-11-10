#include <iostream>
using namespace std;

int largest_subarray_sum(int arr[], int n)
{
    int sum;  
    int largest = 0;

    for(int i = 0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            sum = 0;
            
            for(int k=i; k<=j; k++)
            {
                sum = sum + arr[k];
            }

            if (sum > largest)
            {
                largest = sum;
            }
        }

    }

    return largest;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr)/sizeof(int);
   
    int largest_sum = largest_subarray_sum(arr, n);
    cout << "Largest Sum: " << largest_sum;
}