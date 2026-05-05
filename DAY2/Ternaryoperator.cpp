/*write a cpp program that takes two integer as input from the user. 
find the maximum of two using ternary conditional operator
*/

#include <iostream>
using namespace std;

int main() {
    int a, b, max;

    cout << "Enter two integers: ";
    cin >> a >> b;

    max = (a > b) ? a : b;

    cout << "Maximum number is: " << max << endl;

    return 0;
}