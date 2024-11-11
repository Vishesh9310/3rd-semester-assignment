/*Q1- Create a Matrix class that includes a two-dimensional array as a data member.
Implement member functions to input and display matrix elements.
*/

#include <iostream>
using namespace std;

class Matrix{
    public:
    int m=2, n=2;
    int arr[2][2];

    void input(){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<"Enter value of index: arr["<<i<<"]["<<j<<"] : ";
                cin>>arr[i][j];
            }
        }
    }

    void display(){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    Matrix m1;
    m1.input();
    m1.display();
   
    return 0;
}