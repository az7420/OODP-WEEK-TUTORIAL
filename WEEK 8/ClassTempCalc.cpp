#include <iostream>
using namespace std;

template <typename T>
class Calculator {
    T a, b;
public:
    Calculator(T x, T y) : a(x), b(y) {}

    void add() {
        cout << "Addition: " << a + b << endl;
    }

    void subtract() {
        cout << "Subtraction: " << a - b << endl;
    }

    void multiply() {
        cout << "Multiplication: " << a * b << endl;
    }

    void divide() {
        if (b != 0)
            cout << "Division: " << a / b << endl;
        else
            cout << "Division by zero error!" << endl;
    }
};

int main() {
    cout << "Integer Calculator:" << endl;
    Calculator<int> intCalc(20, 10);
    intCalc.add();
    intCalc.subtract();
    intCalc.multiply();
    intCalc.divide();

    cout << "\nFloat Calculator:" << endl;
    Calculator<float> floatCalc(10.5f, 2.5f);
    floatCalc.add();
    floatCalc.subtract();
    floatCalc.multiply();
    floatCalc.divide();

    return 0;
}
