//write a C program that calculated the compound interest for a given principal amount, interest rate, and time period.
//Use a do-while loop to allow the user to input values multiple times.

#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    float P,i,n;
    cout<<"Enter Principle Amount: ";
    cin>>P;
    cout<<"Enter Interest Rate: ";
    cin>>i;
    cout<<"Enter Time Period: ";
    cin>>n;

    double A = P * ((pow((1 + i / 100), n)));
    double compound = A - P;
    cout<<"Compound Interest: "<<compound<<endl;

    return 0;
}