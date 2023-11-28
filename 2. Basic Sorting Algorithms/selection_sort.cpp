#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countingSort(std::vector<int> v)
{
   int n = v.size();
   
   for(int pos = 0; pos < n-1; pos++)
   {    
        int smallest_index = pos;

        for(int j = pos+1; j < n; j++)
        {
            if(v[j] < v[smallest_index])
            {
                smallest_index = j;
            }
        }

        if(v[smallest_index] < v[pos])
        {
            std::swap(v[smallest_index], v[pos]);
        }
   }

   return v;
}


int main()
{
    // std::vector<int> arr = {-17, 1, -8, 3, 4, 1};
    std::vector<int> arr = {5, 2, 9, 2, 1};
    std::vector<int> sorted_arr = countingSort(arr);
   
    for(int x:sorted_arr)
    {
        std::cout << x << ",";
    }
}