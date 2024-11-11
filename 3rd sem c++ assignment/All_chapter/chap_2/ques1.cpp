/*
Q1- Write a class Rectangle with a constructor that accepts length and width as parameters and a destructor that outputs a message. Calculate and display the area of the rectangle.
*/

#include <iostream>
using namespace std;

class Rectangle{
    public:
    int len;
    int wid;
    Rectangle(int length, int width){
        len=length;
        wid=width;
    }
    ~Rectangle(){
        cout<<"Destructor call"<<endl;
        cout<<len*wid;
    }
};

int main(){
    Rectangle rec1(4,6);

    return 0;
}