//write a program in c++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
/*
output:
Input the value for nth term: 5
1 = 1
1+2 = 3
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15
The sum of the above series is: 35
*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Input the value for nth term: ";
    cin>>num;
    int sum=0;
    int sumall=0;
    for(int i=1;i<=num;i++){
        sum=sum+i;
        sumall=sumall+sum;
        //for sum line
        for (int j = 1; j <= i; ++j) {
            if (j > 1) {
                cout << "+";
            }
            cout << j;
        }
        cout<<" = "<<sum<<endl;
    }
    cout<<"The sum of the above series is: "<<sumall;

    return 0;
}