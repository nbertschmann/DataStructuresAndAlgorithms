// Linear Search is a brute force search method
#include<iostream>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for (int i=0; i<n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {10,15,12,9,6,4,3,10,8};

    int size_arr = sizeof(arr)/sizeof(int);
    int key;
    
    std::cout << "Enter Key: ";
    std::cin >> key;

    int result = linearSearch(arr, size_arr, key);

    if (result !=-1)
    {
        std::cout << key << " is present at index " << result << endl;
    }

    else
    {
        std::cout << "Key " << key << " not found in array" << endl;
    }
}
