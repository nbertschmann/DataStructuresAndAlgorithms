#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b)
{
    std::cout << "Comparing " << a << " and " << b << std::endl; 
    return a > b;
}

int main()
{
    int arr[] = {10,8,8,6,7,44,2,1,7};
    int n = sizeof(arr)/sizeof(int);
    
    // //sorts array from [start, end)
    // std::sort(arr, arr+n);
    
    // //reverses array from [start, end)
    // std::reverse(arr, arr+n);

    //sorts array from [start, end) using comparator
    std::sort(arr, arr+n, std::greater<int>());

    for(int x: arr)
    {
        std::cout << x << ", ";
    }
}