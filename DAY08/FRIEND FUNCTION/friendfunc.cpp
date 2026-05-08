#include<iostream>
using namespace std;

class Area{
    private:
    int legth;
    int width;

    public:

    void setSides(int l,  int w){
        length =l;
        width =w;
    }
    friend void showArea(int Area a);

    };

    void showArea(int Area b){
        int area = a.length *b.width;

        cout << "Area is :" << area << endl;

    }


int main(){
    Area a;
    a.setSides(5, 10);
    showArea(a);

    return 0;

}