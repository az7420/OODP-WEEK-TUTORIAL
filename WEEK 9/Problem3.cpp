#include <iostream>
#include <string>
using namespace std;

void processTransaction(float amount) {
    if (amount <= 0)
        throw string("Invalid transaction amount.");
}

void handleTransaction(float amount) {
    try {
        processTransaction(amount);
    } catch (string& e) {
        throw string("handleTransaction Error: ") + e;
    }
}

int main() {
    float amount;
    cout << "Enter transaction amount: ";
    cin >> amount;

    try {
        handleTransaction(amount);
        cout << "Transaction successful!" << endl;
    } catch (string& e) {
        cout << "Exception caught in main: " << e << endl;
    }

    return 0;
}
