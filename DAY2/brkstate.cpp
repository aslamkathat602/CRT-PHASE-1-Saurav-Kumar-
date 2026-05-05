#include <iostream>
using namespace std;

int main() {
    float percentage;

    cout << "Enter student's percentage (0 to 100): ";
    cin >> percentage;

    if (percentage >= 90 && percentage <= 100) {
        cout << "Grade: A" << endl;
    }
    else if (percentage >= 80 && percentage < 90) {
        cout << "Grade: B" << endl;
    }
    else if (percentage >= 70 && percentage < 80) {
        cout << "Grade: C" << endl;
    }
    else if (percentage >= 60 && percentage < 70) {
        cout << "Grade: D" << endl;
    }
    else if (percentage >= 0 && percentage < 60) {
        cout << "Result: Fail" << endl;
    }
    else {
        cout << "Invalid percentage!" << endl;
    }

    return 0;
}