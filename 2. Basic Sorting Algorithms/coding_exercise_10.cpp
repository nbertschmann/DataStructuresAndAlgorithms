#include <iostream>
#include <vector>
#include <algorithm>

bool compareByX(std::pair<int, int> a, std::pair<int, int> b)
{
    return a.first < b.first;
}

bool compareByY(std::pair<int, int> a, std::pair<int, int> b)
{
    return a.second < b.second;
}

int defkin(int W, int H, std::vector<std::pair<int, int>> position)
{
    
    std::vector<int> v_x; 
    std::vector<int> v_y; 
    
    // Create array with only x values, sorted by x
    std::sort(position.begin(), position.end(), compareByX);
    for (std::pair<int, int> x: position)
    {
        v_x.push_back(x.first);
    }
    
    v_x.insert(v_x.begin(), 0);
    v_x.insert(v_x.end(), W+1);

    // Creat vector with only y values, sorted by y
    std::sort(position.begin(), position.end(), compareByY);
    for (std::pair<int, int> y: position)
    {
        v_y.push_back(y.second);
    }

    v_y.insert(v_y.begin(), 0);
    v_y.insert(v_y.end(), H+1);

    int largest = INT_MIN;

    // iterate through all rows and columns and calculate the 'penalty'
    for(int x = 0; x < v_x.size()-1; x++)
    {
        for (int y = 0; y < v_y.size()-1; y++)
        {
            int area = (v_x[x+1] - v_x[x] - 1) * (v_y[y+1] - v_y[y] - 1);
            std::cout << area << ",";

            if(area>largest)
            {
                largest = area;
            }
        }

        std::cout << std::endl;
    }

    return largest;
}

int main()
{
    std::vector<std::pair<int, int>> position = {{3, 8}, {11, 2}, {8, 6}};

    int W = 15;
    int H = 8;

    int result = defkin(W, H, position);

    std::cout << "Largest: " << result;
    
}