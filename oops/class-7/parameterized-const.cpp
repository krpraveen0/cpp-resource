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

    int getData(){
        return age;
    }
};

int main(){
    Employee teacher(45);
    cout<< "The age of the teacher is :"<<teacher.getData()<<endl;

    Employee engineer(35);
    cout<<"the age of the person is "<<engineer.getData();
}