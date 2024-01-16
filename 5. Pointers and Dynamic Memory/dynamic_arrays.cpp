#include<iostream>

int main()
{
    int n;
    std::cin >> n;

    // Dynamic array allocation
    int *arr = new int[n];

     // Initialize and print elements of the dynamic array
    for(int i=0; i<n; i++)
    {
        arr[i]=i;
        std::cout << arr[i] << " ";
    }

    // Print the value at index 1 before deletion
    std::cout << std::endl << arr[1] << std::endl;
    
    // Dynamic array deallocation
    delete[] arr;

    // Accessing the value at index 1 after deleting (undefined behavior)
    std::cout << arr[1] << std::endl;

}