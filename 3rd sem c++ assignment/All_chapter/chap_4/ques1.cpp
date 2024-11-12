/*
Q1 -Write a program that overloads a function add() to handle the addition of two integers,
two floating-point numbers, and two strings.
*/

#include <iostream>
#include <string>
using namespace std;

int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}

string add(string a, string b){
    return a+b;
}

int main() {
    int intResult = add(5, 10);
    cout << "Addition of integers: " << intResult << endl;

    float floatResult = add(5.5f, 10.5f);
    cout << "Addition of floats: " << floatResult << endl;

    string stringResult = add("Hello, ", "World!");
    cout << "Addition of strings: " << stringResult << endl;

    return 0;
}


/*
Function Overlaoding: It provides multiple definitions of the function by changing signature i.e. changing number of parameters, change datatype of parameters, return type doesn’t play any role.
It can be done in base as well as derived class

Function Overriding: It is the redefinition of base class function in its derived class with same signature i.e. return type and parameters. 
It can only be done in derived class.

function overlaoding me manu function bante hai but function overriding me base class ke function ko replace kr dete hai derived class ke funciton se.
*/