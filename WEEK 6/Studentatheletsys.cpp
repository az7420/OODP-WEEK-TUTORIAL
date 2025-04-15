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
};

class SportsPlayer {
protected:
    string sportName;
    int ranking;
public:
    void setSportsDetails(string s, int rank) {
        sportName = s;
        ranking = rank;
    }
};

class SportStudent : public Student, public SportsPlayer {
public:
    void displayDetails() {
        cout << "Name: " << name << "\nRoll Number: " << rollNumber;
        cout << "\nSport: " << sportName << "\nRanking: " << ranking << endl;
    }
};

int main() {
    SportStudent s;
    s.setStudentDetails("Alice", 101);
    s.setSportsDetails("Basketball", 2);
    s.displayDetails();
    return 0;
}
