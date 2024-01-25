#include<vector>
#include<algorithm>
#include<iostream>

/**
 * @brief Prints a matrix to the standard output.
 *
 * @param matrix The matrix to be printed.
 */
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
       
        std::cout << std::endl;
    }
}

/**
 * @brief Rotates a square matrix 90 degrees clockwise.
 *
 * @param matrix The matrix to be rotated.
 */
void rotate(std::vector<std::vector<int>>& matrix) {
        int n = matrix.size();
        
        // Initialize two pointers, 'a' pointing to the top-left corner, and 'b' pointing to the bottom-right corner
        int a = 0;
        int b = n-1;
        while(a<b){
            
            // Swap elements in a circular fashion to achieve 90-degree clockwise rotation
            for(int i=0;i<(b-a);++i){
                std::swap(matrix[a][a+i], matrix[a+i][b]);
                std::swap(matrix[a][a+i], matrix[b][b-i]);
                std::swap(matrix[a][a+i], matrix[b-i][a]);
            }
            ++a;
            --b;
        }
    }

int main() {
    std::vector<std::vector<int>> matrix = {{1, 2, 3},
                                            {4, 5, 6},
                                            {7, 8, 9} };

    std::cout << "Original Matrix:" << std::endl;
    printMatrix(matrix);

    rotate(matrix);

    std::cout << "\nFinal Rotated Matrix:" << std::endl;
    printMatrix(matrix);

    return 0;
}
