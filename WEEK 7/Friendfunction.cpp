#include <iostream>
using namespace std;

class Book {
private:
    string name;
    float price;

public:
    Book(string n, float p) : name(n), price(p) {}
    friend void book_price(Book b);
};

class Library {
public:
    static void book_price(Book b) {
        cout << "Book Name: " << b.name << endl;
        cout << "Price: " << b.price << endl;
    }
};

int main() {
    Book b("C++ Programming", 499.50);
    Library::book_price(b);
    return 0;
}
