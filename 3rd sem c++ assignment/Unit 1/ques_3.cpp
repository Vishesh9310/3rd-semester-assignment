//write a program in c++ to find a prime number within a range.
/*
output:
Input number for starting range: 1
Input number for ending range: 100
The prime numbers between 1 and 100 are:
......
The total number of prime numbers between 1 to 100 is: 25*/

#include<iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}


int main(){
    int start,end;
    cout<<"Input number for starting range: ";
    cin>>start;
    cout<<"Input number for ending range: ";
    cin>>end;
    int count=0;

    cout<<"The prime numbers between 1 and 100 are:"<<endl;
    for(int i=start;i<=end;i++){
        if (isPrime(i)){
            cout<<i<<" ";
            count++;
        }
    }
    cout<<"\nThe total number of prime numbers between "<<start<<" to "<<end<<" is: "<<count;
    
    return 0;
}