// Custom Vector class with common methods from std::vector
class Vector {
    // Data Members
    int *arr;   // Pointer to dynamic array
    int cs;     // Current size of vector
    int ms;     // Max size or capacity of vector

public:
    // Constructor
    Vector(int max_size = 1) {
        cs = 0;
        ms = max_size;
        arr = new int[ms];  // Allocate memory for array
    }

    // Method to add an element to the end of the vector
    void push_back(const int d) {
        if (cs == ms) {
            int* oldArr = arr; // Store pointer to old array
            ms = ms * 2;       // Double the capacity

            arr = new int[ms];  // Allocate memory for new array

            // Copy elements of old array to new array
            for (int i = 0; i < cs; i++) {
                arr[i] = oldArr[i];
            }

            delete[] oldArr;  // Deallocate memory of old array
        }

        arr[cs] = d;  // Add element to the end of the vector
        cs++;        // Increment current size
    }

    // Method to remove an element from the end of the vector
    void pop_back() {
        // Reduce the current size by 1 element.
        // This way, on the next loop, we will write over the element.
        if (cs > 0) {
            cs--;
        }
    }

    // Method to check if the vector is empty
    bool isEmpty() const {
        return cs == 0;
    }

    // Method to get the first element of the vector
    int front() const {
        return arr[0];
    }

    // Method to get the last element of the vector
    int back() const {
        return arr[cs - 1];
    }

    // Method to access an element at a specific index
    int at(int i) const {
        return arr[i];
    }

    // Method to get the current size of the vector
    int size() const {
        return cs;
    }

    // Method to get the current capacity of the vector
    int capacity() const {
        return ms;
    }

    // Overloaded subscript operator to access elements by index
    int operator[](const int i) const {
        return arr[i];
    }
};
