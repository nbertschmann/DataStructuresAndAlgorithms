#include<iostream>
#include<vector>

int main()
{
    std::vector<std::vector<int>> v = {{1,2,3,4},{1,5,4,3},{9,6,4,3},{4,2}};

    v[0][0] += 10;

    for (std::vector x: v)
    {
        for(int y : x)
        {
            std::cout << y << " ";
        }

        std::cout << std::endl;
    }
}