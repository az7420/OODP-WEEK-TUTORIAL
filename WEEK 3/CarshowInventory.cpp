#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    float price;
    int year;
    static int totalCars;

public:
    Car(string b, string m, float p, int y) {
        brand = b;
        model = m;
        price = p;
        year = y;
        totalCars++;
    }

    void displayCarInfo() {
        cout << "Brand: " << brand << "\nModel: " << model << "\nPrice: $" << price << "\nYear: " << year << "\n\n";
    }

    static int getTotalCars() {
        return totalCars;
    }
};

int Car::totalCars = 0;

int main() {
    Car c1("Toyota", "Camry", 25000, 2022);
    Car c2("Honda", "Civic", 23000, 2021);
    Car c3("Ford", "Mustang", 45000, 2023);

    c1.displayCarInfo();
    c2.displayCarInfo();
    c3.displayCarInfo();

    cout << "Total Cars in Inventory: " << Car::getTotalCars() << endl;
    return 0;
}

