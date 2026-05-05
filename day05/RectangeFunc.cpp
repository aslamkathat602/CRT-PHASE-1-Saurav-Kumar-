/*write a function that takes length and width as an input . 
return and print  the area of rectangle*/

#include <iostream>
using namespace std;


int areaRectangle(int length, int width) {
    int area = length * width;
    return area;
}

int main() {
    int l, w;

    cout << "Enter length: ";
    cin >> l;

    cout << "Enter width: ";
    cin >> w;

    int result = areaRectangle(l, w);

    cout << "Area of rectangle = " << result << endl;

    return 0;
}