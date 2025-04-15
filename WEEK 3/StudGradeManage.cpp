#include <iostream>
using namespace std;

class Student {
private:
    int studentID;
    string name;
    int marks[5];

public:
    Student(int id, string n, int m[]) {
        studentID = id;
        name = n;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
    }

    float calculateAverage() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total / 5.0;
    }

    void displayDetails() {
        cout << "Student ID: " << studentID << "\n";
        cout << "Name: " << name << "\n";
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << "\nAverage Marks: " << calculateAverage() << "\n";
    }
};

int main() {
    int m1[5] = {80, 75, 90, 85, 70};
    Student s1(1, "Bob", m1);

    int m2[5] = {60, 65, 70, 75, 80};
    Student s2(2, "Carol", m2);

    s1.displayDetails();
    s2.displayDetails();

    return 0;
}
