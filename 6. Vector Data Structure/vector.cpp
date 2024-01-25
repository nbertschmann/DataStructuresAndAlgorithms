#include<iostream>
#include<vector>

// Test various methods of std::vector class
int main()
{
    std::vector<int> arr = {1,2,10,12,15};

    // size of vector (# of elememts)
    std::cout << "Vector Size (Before adding element): " << arr.size() << std::endl;

    // capacity of the vector
    std::cout << "Original Capacity: " << arr.capacity() << std::endl;

    // pushback (add element to end of array)
    arr.push_back(3);

    // size of vector (# of elememts)
    std::cout << "Vector Size (After adding element): " << arr.size() << std::endl;
    
    // capacity of the vector
    std::cout << "Capicity of vector after adding element: " << arr.capacity() << std::endl;

    // pop back (romoves last element from vector)
    arr.pop_back();

    // capacity of the vector
    std::cout << "Capicity of vector after removing element: " << arr.capacity() << std::endl;
}
