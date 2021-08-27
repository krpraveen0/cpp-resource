#include<iostream>
#include<string>
using namespace std;
class Student{
    private:
        int id;
        string name;
        float fee;
    private:
        void insert(int i , string n){
            id = i;
            name = n;
        }
        void display(){
            cout << "id of the student is :" << id <<endl;
            cout << "the name of the studnet is :" << name ;
        }
};

int main(){
    //creating an object of Student class
    Student s1;
    //creating one more object of Student class
    Student s2;
    s2.name = "raju";
    cout << s2.name;
    // s1.name = "raju";
    // s1.insert(101,"raju");
    // s2.insert(102,"kaju");
    // s1.display();
    // s2.display();
    return 0;
}

// create 3 object of pen.
// create 2 object of vechile.
//create 4 objects of person. 