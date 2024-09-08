//write a program that takes three integers as input and prints the largest one in C++.

#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    cout<<"Enter third number:";
    cin>>c;

    if(a>b && a>c){
        cout<<a<<" is the largest"<<endl;
    }else if(b>a && b>c){
        cout<<b<<" is the largest"<<endl;
    }else{
        cout<<c<<" is the largest"<<endl;
    }

    return 0;
}