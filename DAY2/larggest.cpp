#include<iostream>;
using namespace std;

int main(){
    int a,b,c;

    cout<<"enter three integer:"<<endl;
    cin>>a>>b>>c;

    

    if(a>b) {
        if(a>c){
            cout << "a is largest "<< a << endl;
        }
        else{
            cout << "c is the largest " << c << endl;
        }

    }
    else if(b>a){

        if(b>c){
            cout << "  b is the largest " << b << endl;
        }
        else{
            cout << "  c is the largest " << c << endl;

        }
      
    }

    return 0;


}