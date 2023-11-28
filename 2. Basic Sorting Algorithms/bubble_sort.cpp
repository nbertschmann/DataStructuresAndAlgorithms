#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> bubbleSort(std::vector<int> arr)
{
    int n = arr.size();
    
    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return arr;
}

int main()
{
    std::vector<int> arr = {-2, 4, -1, 20, 10, 111, -99};
    std::vector<int> sorted_arr = bubbleSort(arr);
   
    for(int x:sorted_arr)
    {
        std::cout << x << ",";
    }
}
