#include<iostream>
using namespace std;\
class Employee{
    public:
        int emp_id;
        string emp_name;
        string emp_role;
        string emp_dept;
        float emp_salary;
        float total_experience;
        void getPromotion(){
            if(total_experience > 2){
                emp_salary = emp_salary + 500000;
                cout << "you have been promoted!!!!!"<<endl;
                cout << "your hiked salary is :"<< emp_salary;
            }
        }
};
int main(){
    Employee qa_analist;
    qa_analist.emp_id = 101;
    qa_analist.emp_name = "raju";
    qa_analist.emp_dept="Testing";
    qa_analist.emp_salary = 200000;
    qa_analist.total_experience = 4;
    qa_analist.getPromotion();

}

// create one more object developer and add one more function in the class ie display() which shows all the details of that developer.