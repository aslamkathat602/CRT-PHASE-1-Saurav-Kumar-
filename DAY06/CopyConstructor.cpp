#include<iostream>
using namespace std;

class Cricketers{
    public:
    string name;
    int runs;
    double avg;

    // Parameterized Constructor
    Cricketers(string n, int r, double a){
        name = n;
        runs = r;
        avg = a;
    }

    // Copy Constructor
    Cricketers(const Cricketers &c){
        this->name = c.name;
        this->runs = c.runs;
        this->avg = c.avg;
    }

    // Member Function
    void show(){
        cout << "Name : " << name << endl;
        cout << "Runs : " << runs << endl;
        cout << "Average : " << avg << endl;
    }
};

int main(){

    
    Cricketers c1("Virat", 12000, 58.5);

    cout << "Original Object" << endl;
    c1.show();

    
    Cricketers c2 = c1;

    cout << "\nCopied Object" << endl;
    c2.show();

    return 0;
}