/*
Q1- Implement a program that calculates the factorial of a given number using a for loop.
Take the number as input from the user and display the factorial result.
*/

#include <iostream>
using namespace std;

int main(){
    int num,fact=1;
    cout<<"Enter number:";
    cin>>num;

    for(int i=num;i>0;i--){
        fact=fact*i;
    }
    cout<<"factorial of the input number is: "<<fact<<endl;

    return 0;
}