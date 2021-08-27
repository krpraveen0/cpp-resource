//example of parameterized constructor.
#include<iostream>
using namespace std;

class Employee{
    private :
    int age;
    public:
    //parameterized constructor as one argument is passed in the parameter of the function
    Employee(int x){
        age = x;
    }
    //copy constructor
    Employee(Employee &teacher){
        age = teacher.age;
    }

    int getData(){
        return age;
    }
};

int main(){
    //teacher object
    Employee teacher(45);
    cout<< "The age of the teacher is :"<<teacher.getData()<<endl;

    //copying object
    Employee thieve(teacher);
    cout<<"The copy object has age:"<<thieve.getData();
}