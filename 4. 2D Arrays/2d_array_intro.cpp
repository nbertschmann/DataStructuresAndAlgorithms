#include <iostream>

void print(int arr[][100], int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }
}

int main()
{
    int arr[1000][100];
    int n, m;
    std::cin >> n >> m;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    print(arr, n, m);
}