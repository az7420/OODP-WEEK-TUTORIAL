/* 2. Develop a system to manage students' marks in a class. The C++ program should:
• Use an array to store marks of N students.
• Provide a menu-driven system with options to:
a.Enter marks Of N students.
b.Calculate thc average marks of thc class.
c.Find the highest and lowest marks.
d.Exit.*/

#include<iostream>
using namespace std;

void enterMarks(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Enter marks of student " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void calculateAverage(int* arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    } 
    double average = (sum / size);
    cout << "Average marks of the class: " << average << endl;
}

void findHighest(int* arr,int size){
    int highest = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > highest) {
            highest = arr[i];
        }
    }
    cout << "Highest marks in the class: " << highest << endl;
}

void findLowest(int* arr, int size){
    int lowest = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < lowest) {
            lowest = arr[i];
        }
    }
    cout << "Lowest marks in the class: " << lowest << endl;
}

int main() {
    int size;
    cout << "Enter number of students: ";
    cin >> size;

    int* marks = new int[size]; // Dynamic memory allocation

    char choice;
    do {
        cout << "\nMenu:\n";
        cout << "a. Enter marks of " << size << " students\n";
        cout << "b. Calculate the average marks of the class\n";
        cout << "c. Find the highest and lowest marks\n";
        cout << "d. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 'a':
                enterMarks(marks, size);
                break;
            case 'b':
                calculateAverage(marks, size);
                break;
            case 'c':
                findHighest(marks, size);
                findLowest(marks, size);
                break;
            case 'd':
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 'd');

    delete[] marks;
    return 0;
}

// Sample Output
/*
Enter number of students: 5

Menu:
a. Enter marks of 5 students
b. Calculate the average marks of the class
c. Find the highest and lowest marks
d. Exit
Enter your choice: a
Enter marks of student 1: 98
Enter marks of student 2: 95
Enter marks of student 3: 93
Enter marks of student 4: 88
Enter marks of student 5: 81

Menu:
a. Enter marks of 5 students
b. Calculate the average marks of the class
c. Find the highest and lowest marks
d. Exit
Enter your choice: b
Average marks of the class: 91

Menu:
a. Enter marks of 5 students
b. Calculate the average marks of the class
c. Find the highest and lowest marks
d. Exit
Enter your choice: c
Highest marks in the class: 98
Lowest marks in the class: 81

Menu:
a. Enter marks of 5 students
b. Calculate the average marks of the class
c. Find the highest and lowest marks
d. Exit
Enter your choice: d
Exiting program.
*/