#include <iostream>
using namespace std;

class Student {
public:
    virtual void study() = 0; // Pure virtual function
};

class Undergraduate : public Student {
public:
    void study() override {
        cout << "Undergraduate studies with assignments and exams." << endl;
    }
};

class Postgraduate : public Student {
public:
    void study() override {
        cout << "Postgraduate studies with research and thesis." << endl;
    }
};

int main() {
    Student* s1 = new Undergraduate();
    Student* s2 = new Postgraduate();

    s1->study();
    s2->study();

    delete s1;
    delete s2;
    return 0;
}
