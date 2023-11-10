#include <iostream>
using namespace std;

void reverseArray(int arr[], int n)
{
    int start = 0;
    int end = n-1;

    while(start<end)
    {
        int start_val = arr[start];
        int end_val = arr[end];

        arr[start] = end_val;
        arr[end] = start_val;

        // std::swap(arr[start],arr[end]);

        start++;
        end--;
    }

}

int main()
{
    int arr[] = {10,20,30,45,60,80,90};
    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i<n; i++)
    {
        std::cout << arr[i] << ",";
    }

    reverseArray(arr,n);
    std::cout << endl;

    for(int i = 0; i<n; i++)
    {
        std::cout << arr[i] << ",";
    }
}