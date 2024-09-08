//write a program in c++ to calculate the sum of the series (1*1)+(2*2)+(3*3)+(4*4)+(5*5)+...+(n*n).
/*
output:
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55
*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Input the value for nth term: ";
    cin>>num;
    int sum=0;
    for(int i=1;i<=num;i++){
        int mul=i*i;
        cout<<i<<"*"<<i<<" = "<<mul<<endl;
        sum=sum+mul;
    }
    cout<<"The sum of the above series is: "<<sum;

    return 0;
}