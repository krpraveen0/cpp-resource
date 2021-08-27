#include<iostream>
using namespace std;

class Emp{
    private:
    int emp_id;
    string name;
    float salary;
    string department;
    public:
    Emp(int o_emp_id, string o_name, float o_salary, string o_department){
        emp_id = o_emp_id;
        name = o_name;
        salary = o_salary;
        department = o_department;
    }

    void getPf(){
        cout<<"The salary of the employee "<<salary<<endl;
        float pf;
        pf = (15*salary)/100;
        cout<< "The PF of the employee is :" << pf;
    }

};


int main(){
    Emp sourabha(101,"sourabha",780000,"R&D");
    sourabha.getPf();

    Emp raju(102,"raju",67909090,"Marketing");
    raju.getPf();

}