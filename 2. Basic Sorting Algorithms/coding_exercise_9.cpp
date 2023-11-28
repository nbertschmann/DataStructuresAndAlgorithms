#include <iostream>
#include <vector>
#include <algorithm>

int pairSticks(std::vector<int> length, int D)
{
    std::sort(length.begin(), length.end());
    int n = length.size();
    int number_pairs = 0;

    for(int i = 0; i < n-1; i ++)
    {
        if(length[i+1]-length[i] <= D)
        {
            number_pairs++;
            i++;
        }
    }
    
    return number_pairs;
}


int main()
{
    int D = 2;
    std::vector<int> arr = {4,5,3,1,2};
    int combos = pairSticks(arr, D);
   
    std::cout << "Combinations: " << combos;
}
