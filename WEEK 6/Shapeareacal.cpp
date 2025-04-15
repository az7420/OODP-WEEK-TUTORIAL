#include <iostream>
#include <cmath>
using namespace std;

class Shape {
public:
    virtual void getData() = 0;
    virtual void displayArea() = 0;
};

class Rectangle : public Shape {
    float length, width;
public:
    void getData() override {
        cout << "Enter length and width of Rectangle: ";
        cin >> length >> width;
    }
    void displayArea() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

class Circle : public Shape {
    float radius;
public:
    void getData() override {
        cout << "Enter radius of Circle: ";
        cin >> radius;
    }
    void displayArea() override {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *shape;
    Rectangle r;
    Circle c;

    shape = &r;
    shape->getData();
    shape->displayArea();

    shape = &c;
    shape->getData();
    shape->displayArea();

    return 0;
}
