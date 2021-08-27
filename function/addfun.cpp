#include<iostream>
using namespace std;

int add(int, int);

int main(){
    int sum;
    cout << "Calling  the addition function" << endl;
    sum = add(3,4);
    cout << "The sum is : "<< sum;
}

inline int add(int a , int b){
    return a+b;
}