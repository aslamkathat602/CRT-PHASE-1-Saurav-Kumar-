/*write a cpp program to create a student manangement system where we store student detail
 1 name 2 roll no 3 register no 4 email id 5 phone no 6 marks
*/
#include<iostream>
#include<string>
using namespace std;

class Student {
    public:
    string name;
    int rollNo;
    int registerNo;
    string email;
    string phone;
    float marks;

    // function to input data
    void input(){
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;

        cout << "Enter Register No: ";
        cin >> registerNo;

        cout << "Enter Email: ";
        cin >> email;

        cout << "Enter Phone No: ";
        cin >> phone;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // function to display data
    void display(){
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Register No: " << registerNo << endl;
        cout << "Email: " << email << endl;
        cout << "Phone No: " << phone << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Student s;

    s.input();     // take input
    s.display();   // show data

    return 0;
}

