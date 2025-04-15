#include <iostream>
using namespace std;

class Book {
    int bookID;
    string title;
    string author;
    float price;

public:
    Book() {
        bookID = 0;
        title = "Unknown";
        author = "Unknown";
        price = 0.0;
    }

    Book(int id, string t, string a, float p) {
        bookID = id;
        title = t;
        author = a;
        price = p;
    }

    void displayBookInfo() {
        cout << "Book ID: " << bookID << "\nTitle: " << title 
             << "\nAuthor: " << author << "\nPrice: $" << price << endl;
    }
};

int main() {
    Book b1;
    Book b2(101, "The Alchemist", "Paulo Coelho", 299.99);
    Book b3(102, "1984", "George Orwell", 199.50);

    cout << "Default Book:\n";
    b1.displayBookInfo();
    cout << "\nBook 2:\n";
    b2.displayBookInfo();
    cout << "\nBook 3:\n";
    b3.displayBookInfo();

    return 0;
}
