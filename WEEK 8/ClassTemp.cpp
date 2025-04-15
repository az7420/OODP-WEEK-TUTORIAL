#include <iostream>
using namespace std;

template <typename T>
class Storage {
    T value;
public:
    Storage(T val) : value(val) {}

    void display() {
        cout << "Stored Value: " << value << endl;
    }
};

int main() {
    Storage<int> intStorage(100);
    Storage<float> floatStorage(45.67f);
    Storage<string> stringStorage("Generic Storage");

    intStorage.display();
    floatStorage.display();
    stringStorage.display();

    return 0;
}
