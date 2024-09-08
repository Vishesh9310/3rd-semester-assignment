//write a c++ program that displays the pattern like a pyramid using asterisks, with odd number in each row.
/*
output:
Input number of rows: 5
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Input number of rows: ";
    cin>>num;
    
    for(int i=1;i<=num;i++){
        for(int j=i;j<num;j++){
            cout<<"  ";
        }
        for(int j=num-i;j<num;j++){
            cout<<"* ";
        }
        for(int j=num-i+1;j<num;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    return 0;
}