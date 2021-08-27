#include<iostream>
using namespace std;

class base{
    public:
    //default constructor
    base(){
        cout<<"Default of Base Class";
    }
    //parameterized constructor
    base(int b){
        cout<<"parameterized of Base class"<<b;
    }
};

//inheriting into the child class
class derived: public base{
    //empty
    //we haven't defined any constructor for this class
    
};

int main(){
    derived d1;
    
}

// Note: If we don't specify a constructor, then derived class will use appropriate constructor from the base class.
//(Applicable only to defaul constructor)