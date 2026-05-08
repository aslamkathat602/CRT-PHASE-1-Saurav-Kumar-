#include<iostream>
#include<string>

using namespace std;


class cricketers {
    public:
    string name;
    int runs;
    double avg;

    //parameterized constructor
    cricketers( string n, int r, double avg)
    {
        name = n;
        runs = r;
        this-> avg = avg;
    }
    //member function
    void show(){
        cout << name << endl;
        cout << runs << endl;
        cout << avg << endl;
        cout << " parameterized constructor called "<< endl;


    }
};
int main(){
    cricketers c1("virat", 18000,200);
    c1.show();
    return 0;

}