    #include<iostream>
    #include<string>
    using namespace std;

    class student{
        public:
        string name;
        int rollNo;

        //defualt constructor
        student(){
            name = "riya";
            rollNo = 123;

        }
        //print
        void show(){
            cout << name << endl;
            cout << rollNo<< endl;
            cout << "default constructor is called " << endl;

        }
    };

    int main(){
        student s1;
        s1.show();
        return 0;
    }