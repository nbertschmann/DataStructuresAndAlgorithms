#include<iostream>
#include<algorithm>
#include<vector>

int main()
{
    std::vector<int> arr = {10, 11, 2, 3, 4, 6, 7, 8};

    int key;
    std::cout << "Enter Key: ";
    std::cin >> key;

    // Find the iterator pointing to the key in the vector
    std::vector<int>::iterator it = std::find(arr.begin(), arr.end(), key);
    
    // Check if the key is found
    if(it != arr.end()){
        std::cout << "Present at index:  " << it - arr.begin();
    }

    else{
        std::cout<<"Element not found" << std::endl;
    }
}
