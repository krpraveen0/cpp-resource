#include<iostream>
using namespace std;
//creating an employee class
class Emp{
    private:
    int age;
    public:
    void setData(int x = 0){
        age = x;
    }
    int getData(){
        return age;
    }
};

int main(){
    Emp saurabha;
    saurabha.setData(99);
    Emp raju;
    raju.setData(18);
    cout<<"the age of saurabha is "<< saurabha.getData();
}