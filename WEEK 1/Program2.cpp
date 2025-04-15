#include <iostream>
using namespace std;

int main() {
    int temp;
    cout << "Enter temperature: ";
    cin >> temp;

    if (temp >= 80)
        cout << "Activity: Swimming" << endl;
    else if (temp >= 60)
        cout << "Activity: Tennis" << endl;
    else if (temp >= 40)
        cout << "Activity: Golf" << endl;
    else
        cout << "Activity: Skiing" << endl;

    return 0;
}
