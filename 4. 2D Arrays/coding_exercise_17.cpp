#include<vector>
#include<iostream>

/**
 * @brief Extracts elements from a 2D array in a wave-like pattern.
 * 
 * @param m Number of rows in the 2D array.
 * @param n Number of columns in the 2D array.
 * @param arr The 2D array.
 * @return A vector containing elements extracted in a wave-like pattern.
 */
std::vector<int> WavePrint(int m, int n, std::vector<std::vector<int>> arr)
{
    int col_max = n-1;
    int col_min = 0;
    int row_max = m-1;
    int row_min = 0;

    int wave_direction = 1;
    
    std::vector<int> result;
    
    // Initialize variables for tracking column and row boundaries, and wave direction
    for(int col = col_max; col >= col_min; col--)
    {
        if(wave_direction==1)
        {
            // Iterate through rows in inscreasing order and append elements to the result vector
            for(int row = row_min; row <= row_max; row++)
            {
                result.push_back(arr[row][col]);
            }

            wave_direction = 0;
        }
        
        else
        {
            // Iterate through rows in decreasing order and push elements to the result vector
            for(int row = row_max; row >= row_min; row--)
            {
                result.push_back(arr[row][col]);
            }

            wave_direction = 1;
        }
    }
    
    return result;
}


int main()
{
    std::vector<std::vector<int>> input = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    std::vector<int> result = WavePrint(4, 4, input);

    for(int x : result)
    {
        std::cout << x << ", ";
    }
}