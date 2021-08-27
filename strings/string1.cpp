#include<iostream>
#include<string>
using namespace std;
string full_name;
string fname;
string lname;
int main(){
    //operations on string
    fname = "Test";
    lname = "user";
    //concatenation
    full_name = fname + lname;
    cout << full_name;
}