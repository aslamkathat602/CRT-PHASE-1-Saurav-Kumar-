#include<iostream>
#include<string>

using namespace std;

// Parent Class
class Player{
    public:
    string name;
    int age;

    // Function to set name
    void setName(string n){
        name = n;
    }

    // Function to set age
    void setAge(int a){
        age = a;
    }
};

// Child Class of Player
class Cricketers : public Player{

    public:
    int runs;

    void setRuns(int r){
        runs = r;
    }

    void showCricketer(){
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Runs : " << runs << endl;
    }
};

// Child Class of Cricketers
class IndianCricketers : public Cricketers{

    public:
    string state;

    void setState(string s){
        state = s;
    }

    void showIndianCricketer(){

        cout << "\nIndian Cricketer Details" << endl;

        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Runs : " << runs << endl;
        cout << "State : " << state << endl;
    }
};

int main(){

    string n, s;
    int a, r;

    // Input
    cout << "Enter Name : ";
    cin >> n;

    cout << "Enter Age : ";
    cin >> a;

    cout << "Enter Runs : ";
    cin >> r;

    cout << "Enter State : ";
    cin >> s;

    // Object of IndianCricketers
    IndianCricketers obj;

    obj.setName(n);
    obj.setAge(a);
    obj.setRuns(r);
    obj.setState(s);

    // Display Output
    obj.showIndianCricketer();

    return 0;
}