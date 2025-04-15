#include <iostream>

using namespace std;

void insertElement(int*& arr, int& size, int element) { // Reference to pointer
    int* newArr = new int[size + 1]; // Create a new array with size + 1
    for (int i = 0; i < size; ++i) {
        newArr[i] = arr[i]; // Copy elements from old array to new array
    }
    newArr[size] = element; // Insert new element at the end
    delete[] arr; // Delete old array
    arr = newArr; // Point to new array
    ++size; // Increment size of array
    cout << "Element inserted successfully." << endl;
}

void deleteElement(int*& arr, int& size, int element) { // Reference to pointer
    int index = -1; // Initialize index to -1
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            index = i; // Store index of element to delete
            break; // Exit loop
        }
    }
    if (index != -1) { // If element found
        int* newArr = new int[size - 1]; // Create a new array with size - 1
        for (int i = 0, j = 0; i < size; ++i) {
            if (i != index) {
                newArr[j++] = arr[i]; // Copy elements from old array to new array
            }
        }
        delete[] arr;
        arr = newArr; // Point to new array
        --size; // Decrement size of array
        cout << "Element deleted successfully." << endl; // Print success message
    } else {
        cout << "Element not found." << endl;
    }
}

void searchElement(const int* arr, int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            cout << "Element found at position: " << i << endl;
            return;
        }
    }
    cout << "Element not found." << endl;
}

void displayElements(const int* arr, int size) {
    cout << "Array elements: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted successfully." << endl;
}

int main() {
    int* arr = nullptr; // Initialize pointer to null for dynamic memory allocation
    int size = 0;
    int choice, element;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Search for an element\n";
        cout << "4. Display all elements\n";
        cout << "5. Sort the array\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to insert: ";
                cin >> element;
                insertElement(arr, size, element);
                break;
            case 2:
                cout << "Enter element to delete: ";
                cin >> element;
                deleteElement(arr, size, element);
                break;
            case 3:
                cout << "Enter element to search: ";
                cin >> element;
                searchElement(arr, size, element);
                break;
            case 4:
                displayElements(arr, size);
                break;
            case 5:
                sortArray(arr, size);
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 6);

    delete[] arr;
    return 0;
}

// Sample Output
/*
Menu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display all elements
5. Sort the array
6. Exit

Enter your choice: 1
Enter element to insert: 5
Element inserted successfully.

Menu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display all elements
5. Sort the array
6. Exit

Enter your choice: 1
Enter element to insert: 10
Element inserted successfully.

Menu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display all elements
5. Sort the array
6. Exit

Enter your choice: 4
Array elements: 5 10

Menu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display all elements
5. Sort the array
6. Exit

Enter your choice: 2
Enter element to delete: 5
Element deleted successfully.

Menu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display all elements
5. Sort the array
6. Exit

Enter your choice: 3
Enter element to search: 10
Element found at position: 0

Menu:
1. Insert an element
2. Delete an element
3. Search for an element
4. Display all elements
5. Sort the array
6. Exit

Enter your choice: 6
Exiting program.




*/
