/*
Q1- Write a class Rectangle with a constructor that accepts length and width as parameters and a destructor that outputs a message.
Calculate and display the area of the rectangle.
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

    void Display_Area(){
        cout<<len*wid<<endl;
    }
    ~Rectangle(){
        cout<<"Destructor call"<<endl;
    }
};

int main(){
    Rectangle rec1(4,6);
    rec1.Display_Area();

    return 0;
}