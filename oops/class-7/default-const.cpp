//example of non-parameterized constructor or default constructor.
#include<iostream>
using namespace std;
class Employee{
    private:
    int age;
    public:
    //non-parameterized constructor 
    Employee(){
        age =0;
    }
    int getData(){
        return age;
    }
};

int main(){
    Employee teacher;
    cout<<"The age of the teacher is :"<<teacher.getData();
}