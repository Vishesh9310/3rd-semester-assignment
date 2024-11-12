/*
Q2- Write a program that demonstrates multilevel inheritance by creating a base class Shape,
a derived class Rectangle, and another derived class ColoredRectangle that adds a color attribute.
*/

#include <iostream>
#include <string>
using namespace std;

class Shape{
    public:
    int len,wid;

    Shape(int l,int w){
        len=l;
        wid=w;
    }

    void Display_shape(){
        cout<<"Length: "<<len<<" Width: "<<wid<<endl;
    }
};

class Rectangle:public Shape{
    public:
    Rectangle(int l, int w):Shape(l, w){
        cout<<"It is a Rectangle class."<<endl;
    }
};

class ColorRectangle:public Rectangle{
    public:
    string color;

    ColorRectangle(int l, int w, string c):Rectangle(l, w){
        color=c;
    }

    void Display_ColorRectangle(){
        cout<<"Length: "<<len<<" Width: "<<wid<<" Color: "<<color<<endl;
    }

};


int main(){
    ColorRectangle c1(5, 6, "Pink");
    c1.Display_ColorRectangle();
    return 0;
}