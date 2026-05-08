#include<iostream>
#include<string>

using namespace std;

// First Parent Class
class Player{
    public:
    string name;
    int age;

    void setPlayer(string n, int a){
        name = n;
        age = a;
    }
};

// Second Parent Class
class Cricketers{
    public:
    int runs;

    void setRuns(int r){
        runs = r;
    }
};

// Child Class
class IndianCricketers : public Player, public Cricketers{

    public:
    string state;

    void setState(string s){
        state = s;
    }

    void show(){
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

    cout << "Enter Name : ";
    cin >> n;

    cout << "Enter Age : ";
    cin >> a;

    cout << "Enter Runs : ";
    cin >> r;

    cout << "Enter State : ";
    cin >> s;

    IndianCricketers obj;

    obj.setPlayer(n, a);
    obj.setRuns(r);
    obj.setState(s);

    obj.show();

    return 0;
}