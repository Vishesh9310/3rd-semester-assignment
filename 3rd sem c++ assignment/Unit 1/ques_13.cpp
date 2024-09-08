//program to print the diamond Shape with using function without return with argument.
/*
output:
Input: 5
output: 

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *
       
*/
#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Input number of rows: ";
    cin>>num;
    
    for(int i=1;i<=num;i++){
        for(int j=i;j<num;j++){
            cout<<" ";
        }
        for(int j=num-i;j<num;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=1;i<=num;i++){
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        for(int j=num;j>=i;j--){
            cout<<"* ";
        } 
        cout<<endl;
    }

    return 0;
}