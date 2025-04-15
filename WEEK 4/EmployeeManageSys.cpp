#include <iostream>
using namespace std;

class Employee {
    int empID;
    string name;
    float salary;
    string designation;

public:
    Employee(int id, string n, float s, string d) {
        empID = id;
        name = n;
        salary = s;
        designation = d;
    }

    Employee(const Employee &e) {
        empID = e.empID;
        name = e.name;
        salary = e.salary;
        designation = e.designation;
    }

    void displayDetails() {
        cout << "ID: " << empID << "\nName: " << name 
             << "\nSalary: $" << salary << "\nDesignation: " 
             << designation << endl << endl;
    }
};

int main() {
    Employee E1(101, "Alice", 50000, "Developer");
    Employee E2 = E1;

    cout << "Employee 1:\n";
    E1.displayDetails();
    cout << "Employee 2 (Copy):\n";
    E2.displayDetails();

    return 0;
}
