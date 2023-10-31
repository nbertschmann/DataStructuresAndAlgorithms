#include <iostream>

void printArray(int array[], int n)
{
    // std::cout << "In main " << sizeof(arr) << std::endl;

    //print value of 'array' (points to first index of 'arr')
    std::cout << array << std::endl;

    for (int i = 0; i < n; i++)
    {
        std::cout << array[i] << std::endl;
    }

    // equivalent to the above loop
    for (int i = 0; i < n; i++)
    {
        std::cout << *(array + i) << std::endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    
    // std::cout << "In main " << sizeof(arr) << std::endl;
    
    //print address of first index of arr
    std::cout << &arr[0] << std::endl;
    printArray(arr, n);
}