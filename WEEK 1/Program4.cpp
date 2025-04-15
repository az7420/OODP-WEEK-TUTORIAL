#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    char slash;

    cout << "Enter first fraction (a/b): ";
    cin >> a >> slash >> b;

    cout << "Enter second fraction (c/d): ";
    cin >> c >> slash >> d;

    int num = a * c;
    int denom = b * d;

    cout << "Product = " << num << "/" << denom << endl;

    return 0;
}
