//calling base class constructor using child class constructor.
#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Default of Base constructor"<<endl;
    }
    base(int base_arg){
        cout<<"Parameterized constructor of base class"<<endl;
    }
};

class derived: public base{
    public:
    derived():base(){
        cout<<"Default of Derived Class"<<endl;
    }
    derived(int derived_arg):base(derived_arg){
        cout<<"Parameterized Constructor of derived class";
    }
};

int main(){
    derived d1;
    derived d2(10);
}