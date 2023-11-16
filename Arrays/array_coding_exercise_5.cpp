#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief Exercise 5: Vector Rotation
 * 
 * This function takes a vector of integers and rotates it to the right by a
 * specified number of positions.
 * 
 * @param a The input vector to be rotated 
 * @param k The number of positions to rotate the vector
 * @return The rotated vector
 */
std::vector<int> kRotate(std::vector<int> a, int k){
    
    std::vector<int> a_rotate(a.size()); 
    int max_size = a.size();
    int index;
    
    // Iterate through the elements of the input vector
    for(int i = 0; i < a.size(); i++)
    {  
        // Calculate the rotated index using modulo to handle wrap-around
        index = (i+k) % max_size;
        
        // Assign the value from the input vector to the rotated index in the new vector
        a_rotate[index] = a[i];
    }
    
    return a_rotate;
}

int main()
{
     // Example usage: Rotate a vector k times and print the rotated vector
    int k = 3;
    std::vector<int> a = {1, 3, 5, 7 ,9};
    std::vector a_rotate = kRotate(a, k);

    for (int value : a_rotate) 
    {
        std::cout << value << ", ";
    }
}