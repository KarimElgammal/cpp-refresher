#include <iostream>

class NumberArray {
private:
    int* numbers;
    int size;

public:
    // Normal constructor
    NumberArray(int s) : size(s) {
        numbers = new int[size];
        for(int i = 0; i < size; i++) {
            numbers[i] = i;
        }
        std::cout << "Normal constructor called\n";
    }

    // Copy constructor
    NumberArray(const NumberArray& other) : size(other.size) {
        numbers = new int[size];
        for(int i = 0; i < size; i++) {
            numbers[i] = other.numbers[i];
        }
        std::cout << "Copy constructor called\n";
    }

    // Move constructor
    NumberArray(NumberArray&& other) noexcept : numbers(other.numbers), size(other.size) {
        other.numbers = nullptr;
        other.size = 0;
        std::cout << "Move constructor called\n";
    }

    // Destructor
    ~NumberArray() {
        delete[] numbers;
    }

    // Helper function to print array
    void print() {
        for(int i = 0; i < size; i++) {
            std::cout << numbers[i] << " ";
        }
        std::cout << "\n";
    }
};

// Function that returns a NumberArray
NumberArray createArray(int size) {
    return NumberArray(size);  // Will trigger move constructor
}

int main() {
    // Normal constructor
    std::cout << "Creating arr1:\n";
    NumberArray arr1(3);
    arr1.print();  // Output: 0 1 2

    // Copy constructor
    std::cout << "\nCreating arr2 as copy of arr1:\n";
    NumberArray arr2 = arr1;
    arr2.print();  // Output: 0 1 2

    // Move constructor
    std::cout << "\nCreating arr3 from temporary:\n";
    NumberArray arr3 = createArray(3);
    arr3.print();  // Output: 0 1 2

    return 0;
}