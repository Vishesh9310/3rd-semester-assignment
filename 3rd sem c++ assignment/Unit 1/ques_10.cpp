//write a c++ program to convert a given integer to a Roman numeral with use of switch statement.
/*
output:
Sample Input:n = VII
Sample Output: Interger 7
Sample Input: n = XIX
Sample Output: Interger 19
*/

#include<iostream>
using namespace std;

int value(char x){
    switch(x){
        case 'I':
           return 1;
           break;
        case 'V':
           return 5;
           break;
        case 'X':
           return 10;
           break;
        case 'L':
           return 50;
           break;
        case 'C':
           return 100;
           break;
        case 'D':
           return 500;
           break;
        case 'M':
           return 1000;
           break;
        default:
           break;
    }
}

int convert_decimal(string str){
    int result=0;

    for(int i=0;i<str.length();i++){
        int s1=value(str[i]);
        if(i+1<str.length()){
            int s2=value(str[i+1]);
            if(s1>=s2){
                result=result+s1;
            }else{
                result=result+(s2-s1);
                i++;
            }
        }else{
            result=result+s1;
        }
    }
    return result;
}

int main(){
    int integer;
    string n;
    cout<<"n = ";
    cin>>n;

    cout<<"Interger "<<convert_decimal(n)<<endl;

    return 0;
}