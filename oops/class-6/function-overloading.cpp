#include<iostream>
class Person{
    private:
    int age;
    public:
    Person(){
        age =0;
    }
    Person(int x){
        age = x;
    }
    //copy constructor
    Person(Person &p_sourabha){

    }
}