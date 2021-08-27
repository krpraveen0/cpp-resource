#include<iostream>
using namespace std;
//creating an employee class
class Emp{
    private:
    int age;
    public:
    // void setData(int x = 0){
    //     age = x;
    // }
    //constructor
    Emp(int x){
        age =x;
    }
    int getData(){
        return age;
    }
};

int main(){
    //creating object with some default value
    Emp saurabha(99);
    Emp raju(18);
    cout<<"the age of saurabha is "<< saurabha.getData()<<endl;
    cout << "the age of raju is "<< raju.getData();

}