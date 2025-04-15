#include <iostream>
using namespace std;

class BankAccount {
    int accNumber;
    double balance;

public:
    // Constructor Overloading
    BankAccount(int acc, double bal) : accNumber(acc), balance(bal) {}
    BankAccount(int acc) : accNumber(acc), balance(0.0) {}

    // Function Overloading
    void deposit(double amount) { balance += amount; }
    void deposit(int amount) { balance += amount; }

    void withdraw(double amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient funds!" << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) balance -= amount;
        else cout << "Insufficient funds!" << endl;
    }

    // Operator Overloading
    bool operator>(BankAccount other) {
        return balance > other.balance;
    }

    void display() {
        cout << "Account: " << accNumber << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, 1000.50);
    BankAccount acc2(102);
    acc2.deposit(500);
    acc2.withdraw(100);

    acc1.display();
    acc2.display();

    if (acc1 > acc2)
        cout << "Account 1 has more balance" << endl;
    else
        cout << "Account 2 has more balance" << endl;

    return 0;
}
