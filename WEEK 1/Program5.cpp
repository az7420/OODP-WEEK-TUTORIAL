#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // a
    cout << "a. " << setw(10) << fixed << setprecision(3) << right << 45.6789 << endl;

    // b
    cout << "b. " << scientific << setprecision(6) << 0.00034567 << endl;

    // c
    cout << "c. " << hex << uppercase << 255 << endl;

    // d
    cout << "d. " << fixed << setprecision(4) << 987.654321 << endl;

    // e
    cout << "e. " << scientific << setprecision(4) << -123.456 << endl;

    return 0;
}
