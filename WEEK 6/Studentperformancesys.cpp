#include <iostream>
using namespace std;

class Student {
protected:
    string name;
    int rollNumber;
public:
    void setStudentDetails(string n, int r) {
        name = n;
        rollNumber = r;
    }
    void displayStudentDetails() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber << endl;
    }
};

class Marks : virtual public Student {
protected:
    int m1, m2, m3;
public:
    void setMarks(int a, int b, int c) {
        m1 = a; m2 = b; m3 = c;
    }
    int getTotalMarks() {
        return m1 + m2 + m3;
    }
    void displayMarks() {
        cout << "Marks: " << m1 << ", " << m2 << ", " << m3 << "\nTotal: " << getTotalMarks() << endl;
    }
};

class Sports : virtual public Student {
protected:
    int sportsMarks;
public:
    void setSportsMarks(int s) {
        sportsMarks = s;
    }
    void displaySportsMarks() {
        cout << "Sports Marks: " << sportsMarks << endl;
    }
};

class Result : public Marks, public Sports {
public:
    void displayResult() {
        displayStudentDetails();
        displayMarks();
        displaySportsMarks();
        int total = getTotalMarks() + sportsMarks;
        float average = total / 4.0;
        cout << "Overall Total: " << total << "\nAverage Marks: " << average << endl;
    }
};

int main() {
    Result r;
    r.setStudentDetails("Ravi", 2025);
    r.setMarks(85, 90, 88);
    r.setSportsMarks(20);
    r.displayResult();
    return 0;
}
