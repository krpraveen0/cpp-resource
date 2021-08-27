#include<iostream>
using namespace std;
string input;
int strCount;
int main(){
    //getline function reads input line by line from the user 
    getline(cin,input);
    cout<<input;
    //count the number of characters in an input string
    strCount = input.length();
    cout <<"the first character of the string is: " << input[0]<<endl;
    cout << "The number of characters in input string is: " << strCount<<endl;
}
