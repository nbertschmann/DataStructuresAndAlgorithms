#include <iostream>
#include <vector>
#include <algorithm>

bool comparePairs(std::pair<int,int> a, std::pair<int, int> b)
{
    if(a.first == b.first)
    {
        return a.second > b.second;
    }

    return a.first > b.first;
}

std::vector<std::pair<int, int>> sortCartesian(std::vector<std::pair<int, int>> v)
{
    int N = v.size();
    
    for(int pos = 0; pos < N-1; pos++)
    {    
        int smallest_index = pos;

        for(int j = pos+1; j < N; j++)
        {
            if(comparePairs(v[smallest_index], v[j]))
            {
                smallest_index = j;
            }
        }

        if(comparePairs(v[pos], v[smallest_index]))
        {
            std::swap(v[smallest_index], v[pos]);
        }
    }

   return v;
}

int main()
{
    
    std::vector<std::pair<int,int>> arr = {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}};
    std::vector<std::pair<int,int>> sorted_arr = sortCartesian(arr);
   
    for(std::pair<int,int> x: sorted_arr)
    {
        std::cout << '(' << x.first << ", " << x.second << ')' << ", ";
    }
}
