/*
Q2- Write a C++ program to create a function that converts Celsius to Fahrenheit and returns the result.
Demonstrate the use of type conversions in the calculation.
*/

#include <iostream>
using namespace std;

float convertor(float cel){
    float fahrenheit = (cel * 9.0) / 5.0 + 32;
    return fahrenheit;
}

int main(){
    float cel;
    cout<<"Enter value of Celsius";
    cin>>cel;
    cout<<convertor(cel)<<endl;

    return 0;
}