/*write a program that performs basic arithmetic operations(addition(with argument, without return),substraction(with return, without argument),
multiplication(without argument, with return), division(with argument, with return)) on two numbers with create a function of each operations.*/

#include <iostream>
using namespace std;

void addition(int x,int y);
int subtraction();
int multiplication();
int division(int x,int y);

int main(){
    //addition
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    addition(a,b);

    //substraction
    int sub=subtraction();
    cout<<"subtraction:"<<sub<<endl;

    //multiplication
    int mul=multiplication();
    cout<<"multiplication:"<<mul<<endl;

    //division
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    int div=division(a,b);
    cout<<"division:"<<div<<endl;

    return 0;
}

void addition(int x, int y){
    cout<<"addition of numbers is:"<<x+y<<endl;
}

int subtraction(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    return a-b;
}

int multiplication(){
    int a,b;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"Enter second number:";
    cin>>b;
    return a*b;
}

int division(int x, int y)
{
    return x/y;
}
