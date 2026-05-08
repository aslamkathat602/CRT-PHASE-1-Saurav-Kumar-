#include<iostream>
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

// Child Class
class Cricketers : public Player{

    public:
    int runs;

    // Function to set runs
    void setRuns(int r){
        runs = r;
    }

    // Display Function
    void show(){
        cout << "\nCricketer Details" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Runs : " << runs << endl;
    }
};

int main(){

    string n;
    int a, r;

    // Input
    cout << "Enter Name : ";
    cin >> n;

    cout << "Enter Age : ";
    cin >> a;

    cout << "Enter Runs : ";
    cin >> r;

    // Object of Child Class
    Cricketers c;

    c.setName(n);
    c.setAge(a);
    c.setRuns(r);

    // Display Output
    c.show();

    return 0;
}