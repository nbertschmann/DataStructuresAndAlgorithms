// Custom templated Vector class that implements common methods from std::vector
template<typename T>
class Vector
{
    // Data Members
    T *arr;
    int cs; // Current size of vector
    int ms; // Max size of vector

     // Constructor, Destructor, Methods
    public:

        // Constructor
        Vector(int max_size = 1){
            cs = 0;
            ms = max_size;
            arr = new T[ms];
        }

    // Method to add an element to the end of the vector
    void push_back(const T d){
        
        if(cs==ms){
            
            T* oldArr = arr; // Store pointer to old array
            ms = ms*2; // Double the capacity

            arr = new T[ms]; // Allocate memory for new array

            // Copy elements of old array to new array
            for(int i=0; i<cs; i++){
                arr[i] = oldArr[i];
            }

            delete[] oldArr; //Deallocate memory of old array
        }

        arr[cs] = d; // Add element to the end of the vector
        cs++; // Increment current size
    }

    void pop_back(){
        // Reduce the current size by 1 element. This way on the next loop 
        // This way, on the next loop, we will write over the element.
        if(cs>0){
            cs--;
        }
    }
    
    // Method to check if the vector is empty
    bool isEmpty() const{ 
        return cs==0;
    }  

    // Method to get the first element of the vector
    T front() const{
        return arr[0];
    }

    // Method to get the last element of the vector
    T back() const{
        return arr[cs-1];
    }

    // Method to access an element at a specific index
    T at(int i) const{
        return arr[i];
    }

    // Method to get the current size of the vector
    int size() const{
        return cs;
    }

    // Method to get the current capacity of the vector
    int capacity() const{
        return ms;
    }

    // Overloaded subscript operator to access elements by index
    T operator[](const int i) const{
        return arr[i];
    }
};
