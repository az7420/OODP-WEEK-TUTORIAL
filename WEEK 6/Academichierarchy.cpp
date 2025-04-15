#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    void setName(string n) {
        name = n;
    }
    void displayName() {
        cout << "Name: " << name << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
public:
    void setSubject(string s) {
        subject = s;
    }
    void displaySubject() {
        cout << "Subject: " << subject << endl;
    }
};

class Professor : public Teacher {
    string department;
public:
    void setDepartment(string d) {
        department = d;
    }
    void displayDetails() {
        displayName();
        displaySubject();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Professor prof;
    prof.setName("Dr. John Smith");
    prof.setSubject("Computer Science");
    prof.setDepartment("Engineering");
    prof.displayDetails();
    return 0;
}
