#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter age: ";
    cin >> age;

    if (age >= 100) {
        cout << "Century category and eligible to vote." << endl;
    }
    else if (age >= 18) {
        cout << "Eligible to vote." << endl;
    }
    else if (age >= 0 && age < 18) {
        cout << "Not eligible to vote." << endl;
    }
    else {
        cout << "Invalid age." << endl;
    }

    return 0;
}
