using namespace std;
#include <iostream>

int binary_search(int arr[], int n, int target)
{
    int start = 0;
    int end = n-1;

     while(start <= end)
    {    
        int mid = start + (end-start)/2;
        int guess = arr[mid];
        
        if(guess == target)
        {
            return mid;
        }

        else if(guess < target)
        {
            start = mid + 1;
        }

        else
        {
            end = mid - 1;
        } 
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 10, 11, 19, 29, 30};
    int sz = sizeof(arr)/sizeof(int);
    int num;

    std::cout << "Find index of integer: ";
    std::cin >> num;
    int index = binary_search(arr, sz, num);
    std::cout << "Index is: " << index;
}