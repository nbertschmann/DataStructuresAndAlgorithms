#include<vector>
#include<algorithm>
#include<iostream>

/**
 * @brief Given a two-dimensional array, if any element within is zero, make its whole row and column zero
 * 
 * @param arr The array to be modified
 * @return The modified array
 */
std::vector<std::vector<int>> makeZeroes(std::vector<std::vector<int>> arr){
    
    int num_rows = arr.size();
    int num_cols = arr[0].size();

    std::vector<bool> zero_rows(num_rows, false);
    std::vector<bool> zero_cols(num_cols, false);

    // Iterate through rows and save the rows and columns that will have a value of 0
    for(int rows = 0; rows < num_rows; rows++)
    {
        for(int cols = 0; cols < num_cols; cols++)
        {
            if(arr[rows][cols] == 0)
            {
                zero_rows[rows] = true;
                zero_cols[cols] = true;
            }
        }

        std::cout << std::endl;
    }

    // Populate array with values of zero based on zero_rows and zero_columns
    for(int rows = 0; rows < num_rows; rows++)
    {
        for(int cols = 0; cols < num_cols; cols++)
        {
            if(zero_rows[rows]==true)
            {
                arr[rows][cols] = 0;
            }

            if(zero_cols[cols]==true)
            {
                arr[rows][cols] = 0;
            }

        }

        std::cout << std::endl;
    }

    return arr;
    
}

int main(){
    
    std::vector<std::vector<int>> input = { {5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4}};

    std::vector<std::vector<int>> result = makeZeroes(input);

    for(std::vector<int> x : result)
    {
        for(int num : x)
        {
            std::cout << num << " ";
        }

        std::cout << std::endl;
    }            
}