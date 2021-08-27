#include<iostream>
using namespace std;

class Home{
    //data members 
    private:
    int length, breadth;

    public:
    //member function
    void setDetails(int x ,int y){
        length = x;
        breadth = y;
    }

    void area(){
        cout<<"The area of my home is: "<< (length*breadth)<<endl;
    }
};

int main(){
    //object created 
    Home myHouse;// memory will be allocated

    //trying to access the private data members
    // myHouse.length;
    // myHouse.breadth =300;

    myHouse.setDetails(1000,600);
    myHouse.area();//it returns the area of my house


}