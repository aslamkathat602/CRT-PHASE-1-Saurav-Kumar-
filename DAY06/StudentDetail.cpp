#include<iostream>
using namespace std;

class studentDetails{
    private:
    int registerNo =100;

    public:
    string name;
    int rollNo;

    void display(){
        cout << "Name :" << name << endl;
        cout << "rollNo :" << rollNo << endl;
        cout << "registerNo :" << registerNo << endl;
        registerNo++;
    }

    
};

int main(){
    
    studentDetails s1;
    s1.name = " Arman ";
    s1.rollNo = 234;
    s1.display();

    studentDetails s2;
    s2.name = " Ajay ";
    s2.rollNo = 456;
    s2.display();

    return 0;

}