//write a student class which store studnet name , roll_no , subject marks, attendance , also calculate the passing percent of that student 
//which dependes on his/her attendance 
//if a student is present more than 75% than than student is pass per otherwise he/she is fail.
#include<iostream>
#include<string>
using namespace std;

//creating a student class
class Student{
    //declaring data members
    private:
    string name;
    int roll_no;
    int sub_marks;
    float attendance;

    public:
    void passPercentage(float attendance){
        if(attendance >= 75){
            cout<<"The chance of passing of "<<name<<" is high.";
        }else{
            cout<<"The chance of passing of "<<name<<" is low";
        }

    }
    void setStudentDetails(string objName,int objRolNo,int objSubMarks,float objAttendance){
        name = objName;
        roll_no = objRolNo;
        sub_marks = objSubMarks;
        attendance = objAttendance;
    }

    void display(){
        
        cout<< "name of the student is :"<<name<<endl;
        cout<< "The roll no. is :"<<roll_no<<endl;
        cout<< "the subject marks is : " <<sub_marks<<endl;
        cout << "The attendance of the student is : "<<attendance<<endl;
    }
};

int main(){
//creating an object 
Student sourabha;
string name ;
cin>>name;
sourabha.setStudentDetails(name,11,93,85);
sourabha.display();
sourabha.passPercentage(85);
cout<< endl;
cin>>name;
Student lingaRaju;
lingaRaju.setStudentDetails(name,1,88,58);
lingaRaju.display();
lingaRaju.passPercentage(58);


}