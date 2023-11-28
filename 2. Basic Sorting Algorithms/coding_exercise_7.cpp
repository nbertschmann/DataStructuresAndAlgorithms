#include <iostream>
#include <vector>
#include <algorithm>

bool compare(int a, int b, int flag)
{   
    if(flag==0)
    {
        return a > b;
    }
    
    else
    {
        return a < b;
    }
}

std::vector<int> sortingWithComparator(std::vector<int> a, bool flag)
{
    int n = a.size();


    for(int i = 1; i < n; i++)
    {
        int current = a[i];
        int tracker = i-1;

        while((tracker >= 0) && (compare(current, a[tracker], flag)))
        {
            a[tracker+1] = a[tracker];
            tracker--;
        }

        a[tracker+1] = current;
    }

    return a;
    
}

int main()
{
    int sort_type = 0;
    std::vector<int> arr = {4,5,3,1,2};
    std::vector<int> sorted_arr = sortingWithComparator(arr, sort_type);
   
    for(int x:sorted_arr)
    {
        std::cout << x << ",";
    }
}