#include<vector>
#include<algorithm>
#include<iostream>

/**
 * @brief Generates Pascal's Triangle up to the specified number of rows.
 * 
 * @param n The number of rows for Pascal's Triangle.
 * @return A 2D vector representing Pascal's Triangle.
 */
std::vector<std::vector<int>> printPascal(int n)
{
    std::vector<std::vector<int>> pascal_vect;

     // Iterate through each row
    for(int i = 0; i < n; i++)
    {
        // Create a vector for the current row
        std::vector<int> pascal_current;

        // Iterate through each element in the current row
        for(int j = 0; j <= i; j++)
        {
            // Check if it's the first or last element in the row, set to 1 if true
            if(j==0 || i==j)
            {
                pascal_current.push_back(1);
            }
            
             // Calculate the element by summing the corresponding elements from the previous row
            else
            {
                int sum = pascal_vect[i-1][j-1] + pascal_vect[i-1][j];
                pascal_current.push_back(sum);
            }
        }
            
        // Append the current row to the 2D vector
        pascal_vect.push_back(pascal_current);
    }

    return pascal_vect;
}


int main()
{
    int N = 5;
    std::vector<std::vector<int>> result = printPascal(N);

    for(std::vector<int> x : result)
    {
        for(int y : x)
        {
            std::cout << y << " ";
        }

        std::cout << std::endl;
    }
}
 