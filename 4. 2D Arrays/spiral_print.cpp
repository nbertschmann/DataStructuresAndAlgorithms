#include<iostream>

int main() {
    int arr[][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9, 10, 11, 12},
                    {13, 14, 15, 16},
                    {17, 18, 19, 20},             
    };

    int n = 5, m = 4;

    int start_row = 0;
    int start_col = 0;
    int end_row = n - 1;
    int end_col = m - 1;

    // Iterate in a spiral order until start and end indices meet
    while ((start_row < end_row) && (start_col < end_col)) {
        
        // Print top row from left to right
        for (int i = start_col; i <= end_col; i++) {
            std::cout << arr[start_row][i] << ", ";
        }

        // Print rightmost column from top to bottom
        for (int j = start_row + 1; j <= end_row; j++) {
            std::cout << arr[j][end_col] << ", ";
        }

        // Print bottom row from right to left
        for (int k = end_col - 1; k >= start_col ; k--) {
            std::cout << arr[end_row][k] << ", ";
        }

        // Print leftmost column from bottom to top
        for (int l = end_row - 1; l >= start_row + 1; l--) {
            std::cout << arr[l][start_col] << ", ";
        }

        // Update start and end indices for the next iteration
        start_row++;
        start_col++;
        end_row--;
        end_col--;
    }
}