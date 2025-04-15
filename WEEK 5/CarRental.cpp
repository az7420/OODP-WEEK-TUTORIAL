#include <iostream>
using namespace std;

class Car {
    string model;
    double pricePerDay;
    bool isAvailable;

public:
    // Default constructor
    Car() : model("Default"), pricePerDay(1000), isAvailable(true) {}

    // Parameterized constructor
    Car(string m, double p, bool avail) : model(m), pricePerDay(p), isAvailable(avail) {}

    // Copy constructor
    Car(const Car& c) {
        model = c.model;
        pricePerDay = c.pricePerDay;
        isAvailable = c.isAvailable;
    }

    // Booking Function Overloading
    double book(int days) {
        return days * pricePerDay;
    }

    double book(double discountPercent) {
        return pricePerDay * (1 - discountPercent / 100);
    }

    double book(int days, double insurance) {
        return (days * pricePerDay) + insurance;
    }

    // Operator Overloading
    double operator+(Car c) {
        return this->pricePerDay + c.pricePerDay;
    }

    bool operator>(Car c) {
        return this->pricePerDay > c.pricePerDay;
    }

    void display() {
        cout << "Model: " << model << ", Price/Day: " << pricePerDay
             << ", Available: " << (isAvailable ? "Yes" : "No") << endl;
    }
};

int main() {
    Car car1("Honda", 1200, true);
    Car car2("BMW", 2000, true);

    Car car3 = car2; // Using copy constructor

    car1.display();
    car2.display();
    car3.display();

    cout << "Booking car1 for 5 days: " << car1.book(5) << endl;
    cout << "Booking car2 with 10% discount: " << car2.book(10.0) << endl;
    cout << "Booking car1 for 3 days with insurance: " << car1.book(3, 500.0) << endl;

    cout << "Combined cost per day: " << (car1 + car2) << endl;

    if (car2 > car1)
        cout << "BMW is more expensive to rent." << endl;

    return 0;
}
