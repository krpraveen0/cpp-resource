#include<iostream>
#include<string>
using namespace std;

int main(){
    string name, address;

    cout << "enter the address"<< endl;
    getline(cin,address);

    cout<<"Enter the name "<<endl;
    cin >> name;


    if(name == "mahesh"){
        cout<<"name is : "<< name << endl;
        cout << "The address is : "<< address <<endl ;
    }
}
