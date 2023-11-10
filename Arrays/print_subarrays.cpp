#include <iostream>
using namespace std;

void printSubarrays(int arr[], int n)
{
    for(int i = 0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            for(int k = i; k<=j; k++)
            {
                cout << arr[k];
               
                if (k < j) {
                    cout << ", ";
                }
            }
            cout << endl;
           
        }
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
   
    printSubarrays(arr, n);
}