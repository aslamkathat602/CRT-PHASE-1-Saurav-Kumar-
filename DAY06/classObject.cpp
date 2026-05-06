#include<iostream>
using namespace std;

class studentDetails{
    public:
    string name;
    int rollNo;

    void display(){
        cout << "Name :" << name << endl;
        cout << "rollNo :" << rollNo << endl;
    }
};

int main(){
    return 0;
    studentDetails s1;
    s1.name = " Aryan ";
    s1.rollNo = 123;
    s1.display();

    return 0;

}