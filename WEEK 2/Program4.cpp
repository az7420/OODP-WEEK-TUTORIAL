/*4. What is the data type of •result' in the below code? Justify your answer based on C++'s type
conversion rules.
float x 2.5;
int y 3;
auto result — x .t y;*/

#include <iostream>
using namespace std;

int main() {
    float x = 2.5;
    int y = 3;
    auto result = x * y;
    cout << "Result: " << result << endl;
    return 0;
}

/*This program multiplies a float variable x with an integer variable y and stores the result in an auto variable result.
The data type of result will be float because of C++'s type conversion rules.
 When an arithmetic operation is performed between a float and an integer, the integer is promoted to a float before the operation is carried out. 
 This is known as type promotion or type conversion. In this case, the integer variable y will be promoted to a float before being multiplied with the float variable x. 
 Therefore, the result of the multiplication will be a float value.
*/