/* write a function that takes no of coffee shots
 return the totl no of coffee volume if 1 shots =30ml

 write a function wit default arguement and calling it with or without parameter
*/

#include<iostream>
using namespace std;
int noOfCoffeeShots(int a){
    int coffeeVol =30 *a;

    cout << " TOtal number of coffee volume is : " << coffeeVol;
}

int main(){
    int a;
    cout << "enter the number of coffe shots :";
    cin >> a;

    int coffeeShots = noOfCoffeeShots(a);
    return 0;
}