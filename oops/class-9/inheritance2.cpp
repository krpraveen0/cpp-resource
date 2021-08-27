#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"default constructor of base class"<<endl;
    }
    base(int b){
        cout<<"Parameterized constructor of base class"<<b<<endl;
    }
};

//inheriting the parent class
class derived:public base{
    public:
    derived(){
        cout<<"Default of Derived Class"<<endl;
    }
    derived(int d){
        cout<<"Parameterized constructor of derived class: "<<d<<endl;
    }
};

int main(){
    derived d1;
    derived d2(78);
}

//NOTE: 1st default constructor of base class, then default constructor of derived class is called .
//NOTE: 2nd Parameterized constructor of the based class is not called when Prameterized constructor is present in the derived class 