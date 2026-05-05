/*swap two number using pointer */

#include<iostream>
using namespace std;
#include <iostream>
using namespace std;


#include <iostream>
using namespace std;


void swapNumbers(int *a, int *b) {
    int temp;
    temp = *a;   
    *a = *b;    
    *b = temp;   
}

int main() {
    int x = 10, y = 20;

    cout << "Before swap: " << x << " " << y << endl;

    
    swapNumbers(&x, &y);

    cout << "After swap: " << x << " " << y << endl;

    return 0;
}

   





