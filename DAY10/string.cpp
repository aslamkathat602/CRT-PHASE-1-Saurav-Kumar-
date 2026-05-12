#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str1 ="hello";
    string  str2 ="jecrc";
    cout <<str1 " " << str2 << endl;

    // 1 length string
    int n =str1.legth();
    cout << " legth of string is :" << n << endl;

    //2 append
    cout << "After Appending String is :" << str1.append("student") << endl;

    //3Empty string
    cout << "After string Empty :" << str2.empty () << endl;

    //4 concatination
    cout << " After concatination of string is :" << str1 + "bacho" << endl;
    cout << " After concatination of string is 2 "<< str1 << endl;

    //5 push_ back() method 
    str2.push_back('U');
    cout << "After push_back method :" << str1 << endl;

    // pop_ back method
    pop_back();

    cout << " After pop _ back() method :" << str2 << endl;
    
    //find() method
    int index = str1.find("ello");
    cout << " Index of 'ello'  in str1 :" <<index << endl;

    //swap() method  
    str1.swap(str2);
    cout << "After swapping str1 and str2 :  " << endl;
    cout << "str1 : "<< str1 << endl;
    cout << "str2 : " << str2 << endl;

    //substr() method 
    string subStr =str2.substr(5,6);//5 is index and 6 is total legth of substring
    cout << "SUbstring of str2 from index 5 with legth 6 :" << subStr << endl;

    // getline() method
    string str3 :
    //cin >> str3;
    string str3;
    getline(cin, str3);
    cout << "you entered :" << str3 << endl;

}