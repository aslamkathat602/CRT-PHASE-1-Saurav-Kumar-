#include<iostream>
using namespace std;

 class Employee{
    static int reg_no;
    Employee()
     static void show(){
        cout << " Employee regi no is :" <<  reg_no << endl;
    };
    int Employee :: reg_no = 100;
 };

 int main(){
    Employee E1;
    Employee E2;
    Employee E3;
    Employee E4;
    Employee ::show();
 }
    