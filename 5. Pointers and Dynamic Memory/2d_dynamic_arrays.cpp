
#include<iostream>

int **create2Darray(int rows, int cols)
{
    // Allocate memory for rows
    int **arr = new int*[rows];

    for(int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    int value = 0;

    // Allocate memory for columns in each row
    for(int i =0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
    
}

int main()
{
    
    int rows, cols;
    std::cin >> rows >> cols;

    // Create a dynamically allocated 2D array
    int **arr = create2Darray(rows,cols);

    // Print the elements of the 2D array
    for(int i = 0; i<rows; i++)
    {
        for(int j=0; j<cols; j++)
        {
            std::cout << arr[i][j] << " ";
        }

        std::cout << std::endl;
    }

    // Deallocate memory for the 2D array
    for (int i = 0; i < rows; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}