#include <iostream>
using namespace std;

template <typename T>
void findMax(T a, T b) {
    cout << "Max: " << (a > b ? a : b) << endl;
}

int main() {
    findMax(10, 20);           // integers
    findMax(5.7f, 2.3f);       // floats
    findMax(3.14159, 2.71828); // doubles

    return 0;
}
