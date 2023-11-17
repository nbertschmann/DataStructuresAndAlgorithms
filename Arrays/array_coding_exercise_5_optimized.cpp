#include <vector> 
#include <algorithm>
#include <iostream>

std::vector<int> kRotate(std::vector<int> arr, int k)
{
    
    int n = arr.size();
    if(k >= n)
    {
        k = k % n;
    }

    std::reverse(arr.begin(), arr.end()-k);
    std::reverse(arr.end()-k, arr.end());
    std::reverse(arr.begin(), arr.end());

    return arr;
}

int main()
{
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int k = 99;
    std::vector<int> rotated_arr = kRotate(arr, k);

    for(int x : rotated_arr)
    {
        std::cout << x << ",";
    }
}