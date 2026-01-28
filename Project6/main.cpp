#include <stdio.h>
#include <iostream>

//Function prototypes
int* apply_all(const int arr_1[], size_t size_1, const int arr_2[], size_t size_2);
void print_array(const int arr[], size_t size);

int main() {
    // Example usage
    const int array1[] {1, 2, 3, 4, 5};
    const int array2[] {10, 20, 30};
    
    std::cout << "Array 1: ";
    print_array(array1, 5);
    
    std::cout << "Array 2: ";
    print_array(array2, 3);
    
    int* results = apply_all(array1, 5, array2, 3);
    std::cout << "Result: ";
    print_array(results, 15);
    
    // Clean up dynamically allocated memory
    delete[] results;
    
    return 0;
}

int* apply_all(const int arr_1[], size_t size_1, const int arr_2[], size_t size_2) {
    // Dynamically allocate new array with size = size_1 * size_2
    int* result = new int[size_1 * size_2];
    
    int index = 0;
    // Loop through each element of arr_2
    for (size_t i = 0; i < size_2; i++) {
        // Multiply current arr_2 element by each element of arr_1
        for (size_t j = 0; j < size_1; j++) {
            result[index++] = arr_2[i] * arr_1[j];
        }
    }
    
    return result;
}

void print_array(const int arr[], size_t size) {
    std::cout << "[ ";
    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i];
        if (i < size - 1) {
            std::cout << ", ";
        }
    }
    std::cout << " ]" << std::endl;
}