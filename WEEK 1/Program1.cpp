#include <iostream>
using namespace std;

int main() {
    int a, b, product, count = 0;
    cout << "Enter two integers: ";
    cin >> a >> b;

    product = a * b;
    int temp = product;

    while (temp != 0) {
        count++;
        temp /= 10;
    }

    cout << "Product - " << product << endl;
    cout << "Count of digits - " << count << endl;
    return 0;
}
