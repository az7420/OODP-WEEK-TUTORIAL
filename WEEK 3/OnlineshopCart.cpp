#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;
    int quantity;

public:
    Product(int id, string name, float p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    float calculateTotalPrice() {
        return price * quantity;
    }

    void productDetails() {
        cout << "Product ID: " << productID << "\n";
        cout << "Name: " << productName << "\n";
        cout << "Price: $" << price << "\n";
        cout << "Quantity: " << quantity << "\n";
        cout << "Total Price: $" << calculateTotalPrice() << "\n\n";
    }
};

int main() {
    Product cart[3] = {
        Product(1, "Laptop", 1000.0, 1),
        Product(2, "Mouse", 25.5, 2),
        Product(3, "Keyboard", 45.0, 1)
    };

    for (int i = 0; i < 3; i++) {
        cart[i].productDetails();
    }

    return 0;
}
