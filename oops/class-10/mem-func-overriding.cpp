//overiding of member function--
//overriding is the proces in which we try to redefine the base class functions 
// in its child/derived class 
//note: a function can be overriden only if both the child class and parent class
//function have the same name as well as same number of arguments.
#include<iostream>
using namespace std;
class Animal{
    public:
    void msg(){
        cout<<"I am animal"<<endl;
    }
};
class Dog:public Animal{
    public:
    void msg(){
        cout<<"bhow!! bhow I am dog here!!"<<endl;
    }
};

int main(){
    Animal a;
    a.msg();

    Dog d;
    d.msg();
}