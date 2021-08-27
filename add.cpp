#include<iostream>
using namespace std;
int main(){
    int num1,num2,sum;
    //ask input from the user for num1
    cout<<"Enter num1:"<<endl;
    cin >> num1;
    //ask second input from the user for num2
    cout<<"Enter num2:"<<endl;
    cin >> num2;
    //addition
    sum = num1 + num2;
    cout<<"The sum of two numbers is :"<<sum;
}
//write a program to check wether the input given from the use is even or odd.
//write a program to create a class StudnetResult
//it contains 5 subject marks getResult() which evaluates if that student is pass or fail
// condition of pass and fail 
// if the score of student is more than or equal to 33% but less than 50% than he is pass with 3rd division
// if the score of student is more than or equal to %50 but less than 60% than he is pass with 2rd division
// if the score of student is more than or equal to 60% than he is pass with 1rd division
//create an object from that class

class StudentResult{
    //data memebers or class variables
    // int enggPhysics = 90;
    // int enggChemistry = 87;
    // int enggMaths = 93;
    // int basicComputer = 95;
    // int english = 96;
    int enggPhysics;
    int enggChemistry ;
    int enggMaths ;
    int basicComputer ;
    int english;
    void getResult(){
        int totalMarks = 500;
        int percentageMarks = (enggChemistry+enggMaths+enggMaths +english)/500 * 100;
        if(percentageMarks>=33 || percentageMarks<50){
            cout<<"Congratulations you are passed with "<<percentageMarks<<"%"<<endl;
            cout<<"You have passed with Third Division";  
        }else if(percentageMarks>=50 || percentageMarks<60){
             cout<<"Congratulations you are passed with "<<percentageMarks<<"%"<<endl;
              cout<<"You have passed with Second Division"; 
        }else if(percentageMarks>=60 || percentageMarks<=100){
             cout<<"Congratulations you are passed with "<<percentageMarks<<"%"<<endl;
              cout<<"You have passed with First Division"; 
        }else{
            cout<<"Very sad to speak you failed to enjoy your result."; 
        }
    }


}