#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

  
    ch = tolower(ch);

    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "It is a Vowel." << endl;
            break;
        default:
            cout << "It is a Consonant." << endl;
    }

    return 0;
}