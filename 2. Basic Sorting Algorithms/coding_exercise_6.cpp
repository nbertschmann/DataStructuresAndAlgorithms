#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countingSort(std::vector<int> v)
{
    int swaps = 0;
    int n = v.size();

    for(int i = 0; i < n-1; i++)
    {
        for(int j = 0; j < n-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;

                swaps++;
            }

        }

        if((swaps == 0) && (i == 0))
        {
            std::cout << "Array is sorted" << std::endl;
            return v;
        }
    }

    return v;
}

int main()
{
    std::vector<int> arr = {1, 2, 7, 9, 100};
    std::vector<int> sorted_arr = countingSort(arr);
   
    for(int x:sorted_arr)
    {
        std::cout << x << ",";
    }
}