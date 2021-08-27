//program to show the derived class constructor can call base class constructor as well.
#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"Default construcotr";
    }
    base(int argument){
        cout << "Parameterized base class "<<argument;
    }
};

class derived:public base{
    public:
    derived(): base(){
        cout<<"Default of derived Class"<<endl;
    }
    derived(int argument) : base(argument){
        cout << "parameter of derived class.";
    }
};
int main(){
    derived d;
    derived praveen(87);
}

//Derived Class constructor can call base class constructor.