#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> countingSort(std::vector<int> v)
{
    int n = v.size();
    int track = 0;
    
    for(int i = 1; i < n; i++)
    {
        int current = v[i];
        int tracker = i - 1;

        while((tracker>=0) && (v[tracker] > current))
        {
            v[tracker+1] = v[tracker];
            tracker--;
        }

        v[tracker+1] = current;

    }

    return v;
}


int main()
{
    std::vector<int> arr = {17, 1, -8, 3, 4};
    std::vector<int> sorted_arr = countingSort(arr);
   
    for(int x:sorted_arr)
    {
        std::cout << x << ",";
    }
}