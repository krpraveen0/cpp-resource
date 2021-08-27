#include<iostream>
using namespace std;

class StudentResult{

    public:
        int enggPhysics;
        int enggChemistry ;
        int enggMaths ;
        int basicComputer ;
        int english;
        void getResult(){
            int totalMarks = 500;
            int percentageMarks = ((enggChemistry+enggMaths+enggMaths +english)*100)/500;
            if(percentageMarks>=33 && percentageMarks<50){
                cout<<"Congratulations you are passed with "<<percentageMarks<<"%"<<endl;
                cout<<"You have passed with Third Division";  
            }else if(percentageMarks>=50 && percentageMarks<60){
                cout<<"Congratulations you are passed with "<<percentageMarks<<"%"<<endl;
                cout<<"You have passed with Second Division"; 
            }else if(percentageMarks>=60 && percentageMarks<=100){
                cout<<"Congratulations you are passed with "<<percentageMarks<<"%"<<endl;
                cout<<"You have passed with First Division"; 
            }else{
                cout<<"Very sad to speak you failed to enjoy your result."; 
            }
        }


};

int main(){
    StudentResult saurabhaResult;
    saurabhaResult.english = 98;
    saurabhaResult.enggMaths = 93;
    saurabhaResult.enggChemistry=87;
    saurabhaResult.enggPhysics= 90;
    saurabhaResult.basicComputer = 95;
    saurabhaResult.getResult();

}