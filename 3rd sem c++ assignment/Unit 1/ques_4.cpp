//write a program in c++ to find the sum of the digits of a given number.
/*
output:
Input a number: 1234
The sum of digit of 1234 is: 10
*/

#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Input a number: ";
    cin>>num;
    int sum=0;
    int reminder=0;
    int temp=num;

    while(temp != 0){
        reminder=temp%10;
        sum=sum+reminder;
        temp/=10;
    }
    cout<<"The sum of digit of "<<num<<" is: "<<sum<<endl;
    
    return 0;
}