#include<iostream>
using namespace std;
int main(){
    //declaring an array
    int std_marks[5] = {34,56,78,98,34};
    cout << std_marks<<endl;
    // cout << std_marks[0];
    //retrieving the values of an array
    for(int i =0;i<=4;i++){
        cout << std_marks[i] <<endl;
    }
    //performing some operation(sum)
    int sum = 0;
    for(int i = 0; i<=4;i++){
        sum = sum + std_marks[i];
    }
    cout << "the sum of the all students marks is :"<< sum;
}


// write a program to find the minimum marks in a given array of marks.
// write a program to find the maximum marks in a given arry of marks.