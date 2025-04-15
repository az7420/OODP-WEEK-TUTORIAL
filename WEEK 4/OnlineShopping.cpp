#include <iostream>
using namespace std;

class Product {
    int productID;
    string productName;
    float price;
    int quantity;

public:
    Product() {
        productID = 0;
        productName = "N/A";
        price = 0;
        quantity = 0;
    }

    Product(int id, string name, float p, int q) {
        productID = id;
        productName = name;
        price = p;
        quantity = q;
    }

    float calculateTotalPrice() {
        return price * quantity;
    }

    void display() {
        cout << "Product ID: " << productID << "\nName: " << productName
             << "\nPrice: $" << price << "\nQuantity: " << quantity
             << "\nTotal: $" << calculateTotalPrice() << endl << endl;
    }

    ~Product() {
        cout << "Destructor called for product: " << productName << endl;
    }
};

int main() {
    Product cart[2] = {
        Product(1, "Laptop", 55000, 1),
        Product(2, "Mouse", 500, 2)
    };

    cout << "Cart Details:\n";
    for (int i = 0; i < 2; i++)
        cart[i].display();

    return 0;
}
