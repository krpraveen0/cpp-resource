#include<iostream>
using namespace std;
struct Person{
    int id;
    string name;
    string address;
    float salary;
};
int main(){
    //accessing the variable of the structures
    Person man;
    cout<<man.id<<endl;
    //assign value to the structure variable
    man.id = 6;
    man.name= "raju";
    man.address = "bangalore";
    man.salary = 44363.45;
    cout<<man.id<<endl;
    cout<<man.name<<endl;
    cout<<man.address<<endl;
    cout<<man.salary<<endl;

}
//Task
//write a program to create a user defined data type student acess show that 
// how to create variable of user defined type.
// how to assign the values in those varialbles.
// how to access those user defined data types.