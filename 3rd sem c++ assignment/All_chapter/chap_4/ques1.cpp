/*
Q1 -Write a program that overloads a function add() to handle the addition of two integers,
two floating-point numbers, and two strings.
*/

#include <iostream>
using namespace std;

void add(int num1, int num2){
    cout<<num1+num2<<endl;
}

void add(int num1, int num2, float f1, float f2, string s1, string s2){
    cout<<num1+num2+f1+f2<<s1+s2<<endl;
}

int main(){
    add(3, 5);
    add(2, 5, 1.4, 1.6, "vishesh", "chauhan");

    return 0;
}