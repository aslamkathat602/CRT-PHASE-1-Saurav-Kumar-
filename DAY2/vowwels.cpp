#include<iostream>;
using namespace std;

int main(){
    char ch;

    cout << "enter an aplhabet " << endl;
    cin >> ch;

    ch =tolower(ch);

    switch(ch){

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':

        cout << " the aplhabet is vowels " << endl;
        break;

        default:
        cout << "the aplhabet is consonant " << endl;

    

    }

    return 0;
}

/*
write a cpp program that similate simple customber support using switch case statement are
1.support
2. billing
3.technical issue
4.speak to agent
*/