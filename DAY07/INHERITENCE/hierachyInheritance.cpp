#include<iostream>
#include<string>

using namespace std;

// Parent Class
class Player{

    public:
    string name;
    int age;

    void setPlayer(string n, int a){
        name = n;
        age = a;
    }
};

// First Child Class
class Cricketer : public Player{

    public:
    int runs;

    void setRuns(int r){
        runs = r;
    }

    void showCricketer(){

        cout << "\nCricketer Details" << endl;

        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Runs : " << runs << endl;
    }
};

// Second Child Class
class Footballer : public Player{

    public:
    int goals;

    void setGoals(int g){
        goals = g;
    }

    void showFootballer(){

        cout << "\nFootballer Details" << endl;

        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "Goals : " << goals << endl;
    }
};

int main(){

    // Object of Cricketer
    Cricketer c;

    c.setPlayer("Virat", 36);
    c.setRuns(13000);

    c.showCricketer();

    // Object of Footballer
    Footballer f;

    f.setPlayer("Messi", 38);
    f.setGoals(850);

    f.showFootballer();

    return 0;
}