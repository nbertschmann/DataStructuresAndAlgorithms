#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countingSort(std::vector<int> arr)
{
    int n = arr.size();
    int largest = INT_MIN;

    // find largest element in array
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    std::vector<int> count_map(largest+1, 0);

    for(int i = 0; i < n; i++)
    {
        int val = arr[i];
        count_map[val]++;
    }
    
    int tracker = 0;

    for(int i = 0; i < largest+1; i++)
    {
        while(count_map[i] > 0)
        {
            arr[tracker] = i;
            count_map[i]--;
            tracker++;
        }
    }

    return arr;
}

int main()
{
    std::vector<int> arr = {5, 2, 9, 2, 1, 77, 0};
    std::vector<int> sorted_arr = countingSort(arr);
   
    for(int x:sorted_arr)
    {
        std::cout << x << ",";
    }
}