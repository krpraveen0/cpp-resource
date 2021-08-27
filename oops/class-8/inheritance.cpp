//program to show inheritance concept
#include<iostream>
using namespace std;

class rectangle{
    public:
    int length;
    int breadth;

    void show(){
        cout<< length;
        cout << breadth;
    }
};

//inheriting the base class rectangle into the child class cuboid
class cuboid : public rectangle{
    public:
    int height;
    void display(){
        cout <<"the height is: " << height;
    }
};
int main(){
    //creating an object rect of reactangle type.
    rectangle rect;
    rect.length =  10;
    rect.breadth = 20;
    rect.show();

    //creating an object of child class
    cuboid cube;

    cube.length = 5 ;
    cube.breadth = 10;
    cube.height = 30;
    cube.show();
    cube.display();

}