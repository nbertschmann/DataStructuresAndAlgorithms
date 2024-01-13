#include<vector>
#include<iostream>
#include<algorithm>

/**
 * @brief Calculates the sum of elements in a submatrix of a given 2D matrix.
 * 
 * @param v The input 2D matrix.
 * @param sr The starting row index of the submatrix.
 * @param sc The starting column index of the submatrix.
 * @param er The ending row index of the submatrix.
 * @param ec The ending column index of the submatrix.
 * @return The sum of elements in the specified submatrix.
 */
int sum(std::vector<std::vector<int>> v, int sr, int sc, int er, int ec)
{
    std::vector<std::vector<int>> M;
    M.resize(v.size(), std::vector<int>(v[0].size()));

    int sz_row = v.size();
    int sz_col = v[0].size();

    // Populate M matrix with cumulative sums
    for(int row = 0; row < sz_row; row++)
    {
        for(int col = 0; col < sz_col; col++)
        {
            if(row == 0 && col == 0)
            {
                M[row][col] = v[row][col];
            }
            
            else if(row == 0)
            {
                M[row][col] = v[row][col] + M[row][col-1];
            }

            else if(col == 0)
            {
                M[row][col] = v[row][col] + M[row-1][col];
            }

            else
            {
                M[row][col] = v[row][col] + M[row-1][col] + M[row][col-1] - M[row-1][col-1];
            }
        }
    }
    
    int sum_val = -1;

     // Calculate the sum of elements in the specified submatrix
    if(sr > 0 && sc > 0)
    {
        sum_val = M[er][ec] - M[er][sc-1] - M[sr-1][ec] + M[sr-1][sc-1];
    }

    else if(sr > 0)
    {
        sum_val = M[er][ec] - M[sr-1][ec];
    }

    else if(sc > 0)
    {
        sum_val = M[er][ec] - M[er][sc-1];
    }

    else
    {
        sum_val = M[er][ec];
    }

    return sum_val;

}

int main()
{
    std::vector<std::vector<int>> input = {{1, 2, 3, 4, 6},
                                            {5, 3, 8, 1, 2},
                                            {4, 6, 7, 5, 5},
                                            {2, 4, 8, 9, 4} };

    int start_row = 2;
    int start_colum = 2;
    int end_row = 3;
    int end_colum = 4;
    
    int result = sum(input, start_row, start_colum, end_row, end_colum);
}