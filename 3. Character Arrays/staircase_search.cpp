#include<iostream>
#include<vector>

std::pair<int,int> staircaseSearch(int arr[][4], int n, int m, int key)
{
    if(key < arr[0][0] || key > arr[n-1][m-1])
    {
        return {-1,-1};
    }

    int row = 0;
    int col = m-1;

    while(row < n && col >= 0 )
    {
        if(key == arr[row][col])
        {
            return {row, col};
        }
        
        else if(key > arr[row][col])
        {
            row ++;
        }

        else
        {
            col--;
        }
    }

    return {-1,-1};
}

int main()
{
    int arr[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 50}};

    int key = 37;

    std::pair<int,int> result = staircaseSearch(arr, 4, 4, key);

    std::cout << result.first << ", " << result.second << std::endl;

    return 0;
}