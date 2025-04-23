#include <iostream>
using namespace std;

class Cleanup {
public:
    ~Cleanup() {
        cout << "Cleanup done." << endl;
    }
};

void processFile() {
    Cleanup c;
    cout << "Processing sensitive data..." << endl;
    throw "File read error!";
}

int main() {
    try {
        processFile();
    } catch (const char* msg) {
        cout << "Exception: " << msg << endl;
    }

    return 0;
}
