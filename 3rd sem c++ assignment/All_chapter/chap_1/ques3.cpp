/*
Q3- Write a program to display a table of numbers from 1 to 10 with their squares and cubes,
aligning the output using the setw manipulator.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    cout<<"number"<<setw(10)<<"square"<<setw(7)<<"cube"<<endl;
    for(int i=1;i<=10;i++){
        cout<<i<<setw(10)<<i*i<<setw(10)<<i*i*i<<endl;
    }
    return 0;
}