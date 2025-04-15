#include <iostream>
using namespace std;

template <typename T>
void display(T value) {
    cout << "Value: " << value << endl;
}

int main() {
    display(42);            // int
    display(3.14f);         // float
    display("Hello C++");   // string (C-style)
    display(string("World")); // string (C++ string)

    return 0;
}
