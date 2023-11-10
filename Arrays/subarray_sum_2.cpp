#include <iostream>
using namespace std;

int largest_subarray_sum(int arr[], int ps[], int n)
{
    int subarray_sum = 0;
    int largest_sum = 0;

    for(int i = 1; i < n; i++)
    {
        if(i==0)
        {
            ps[i] = arr[i];
        }

        else
        {
            ps[i] = ps[i-1] + arr[i];
        }
    }

    for(int i = 0; i < n; i ++)
    {     
        for(int j = i; j < n; j++)
        {
            if (i == 0)
            {
                subarray_sum = ps[j];
            }

            else
            {
                subarray_sum = ps[j] - ps[i-1];
            }       

            if(subarray_sum > largest_sum)
            {
                largest_sum = subarray_sum;
            }  
        }
    }

    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    const int n = sizeof(arr)/sizeof(int);
    int ps[n];

    int largest_sum = largest_subarray_sum(arr, ps, n);
    cout << "Largest Sum: " << largest_sum;
}