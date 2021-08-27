//demo of functional programming
#include<iostream>
using namespace std;
//global variable declaration
int num1;
int num2;
int add(int,int);
int subtract(int,int);
int main(){
    num2 = 10;
    num1 = 20;
   cout<< add(3,4) <<endl;
   cout << subtract(3,4) <<endl;
   cout << add(num1,num2)<<endl;


}

int add(int a, int b){
    //local variable
    num1 = 20;
    int sum = a + b;
    return sum;
}

int subtract(int a, int b){
    int subtract =  b -a ;
    num1 = 50;
    return subtract;

}