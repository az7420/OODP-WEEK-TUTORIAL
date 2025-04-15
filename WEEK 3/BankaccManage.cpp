#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    BankAccount(int accNum, string name, double bal) {
        accountNumber = accNum;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance. Withdrawal failed.\n";
        } else {
            balance -= amount;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Holder: " << accountHolderName << "\n";
        cout << "Balance: $" << balance << "\n";
    }
};

int main() {
    BankAccount acc1(101, "Alice", 5000.00);
    acc1.deposit(1500.50);
    acc1.withdraw(1000);
    acc1.display();

    return 0;
}
