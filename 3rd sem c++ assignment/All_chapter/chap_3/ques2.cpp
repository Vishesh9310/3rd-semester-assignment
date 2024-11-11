/*
Q2- Write a program to use the C++ Standard Library string class.
Take a string as input, convert it to uppercase, and display the length of the string
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string value;
    cout<<"Enter the value of string:";
    cin>>value;

    for(int i=0;i<value.length();i++){
        value[i]=toupper(value[i]);
    }

    cout<<"Uppercase :"<<value<<endl;
    cout<<"Length :"<<value.length();

    return 0;
}