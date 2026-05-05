/*write  a cpp  programthat takes character as a input from user and 
check that is it upppercase or lowercase 
*/
#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is Uppercase." << endl;
    }
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is Lowercase." << endl;
    }
    else {
        cout << "The character is not an alphabet." << endl;
    }

    return 0;
}