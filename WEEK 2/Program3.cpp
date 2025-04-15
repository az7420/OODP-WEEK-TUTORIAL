/*3. Write a C++ program that reverses an integer array using pointers. The program should:
• Accept N integers from the user and store them in an array.
• Use a pointer approach to swap elements in place (without using another array).
• Display the original and reversed arrays-*/

#include<iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* start = arr; // Pointer to the first element
    int* end = arr + size - 1; // Pointer to the last element

    while (start < end) {
        // Swap elements using pointers
        int temp = *start;
        *start = *end;
        *end = temp;

        // Move pointers
        ++start;
        --end;
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int* arr = new int[size]; // Dynamic memory allocation

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr; // Free memory

    return 0;
}