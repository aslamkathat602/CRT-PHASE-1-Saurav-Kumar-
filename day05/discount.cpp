/* write a function that apply 10 % DIUSACOUNT using refrences
, update the original  amount and print the update bill

write a function that takes length and width as an input . return and print  the area of rectangle
*/
#include<iostream>
using namespace std;

void applydisco ( double &bill){
    bill = bill -( bill * 0.10);


}

int main(){
    double bill = 250.50;
    cout << bill << endl;
    applydisco(bill);
    cout << bill << endl;
    return 0;

}