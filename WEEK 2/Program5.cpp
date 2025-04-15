/*5. Consider this code
double pi = 3.14159;
int amrox_pi = (int)pi 0.5;
What is the expected output? HOW' would you modify the code to ensure Correct rounding to the
nearest integer?*/

#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int approx_pi = (int)(pi + 0.5);
    cout << "Approximate value of pi: " << approx_pi << endl;
    return 0;
}

/*The expected output of the given code is 3. This is because the double value of pi (3.14159) is cast to an integer, which truncates the decimal part and results in 3.

To ensure correct rounding to the nearest integer, we add 0.5 to the double value before casting it to an integer. This way, if the decimal part is 0.5 or greater, the value will round up to the next integer. 
In this case, adding 0.5 to 3.14159 gives 3.64159, which when cast to an integer results in 3. The correct expected output should be 3.
*/
