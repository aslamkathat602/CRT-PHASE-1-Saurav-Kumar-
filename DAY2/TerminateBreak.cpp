/*write a cpp prgoram that continusly takes positive integer as an input from 
the user add to the run the sum if the user enters the negative number imdeiately 
terminate the loop using break statement and  print the final sum
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    int sum = 0;

    while (true) {
        cout << "Enter a positive number (negative to stop): ";
        cin >> num;

        if (num < 0) {
            break;  
        }

        sum += num;  
    }

    cout << "Final sum is: " << sum << endl;

    return 0;
}