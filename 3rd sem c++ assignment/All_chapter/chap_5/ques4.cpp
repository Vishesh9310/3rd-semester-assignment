/*
Q4- Write a class Box and implement a friend function that calculates and returns the volume of the box
*/

#include <iostream>
using namespace std;

class Box{
private:
    double length;
    double width;
    double height;
public:
    Box(double l, double w, double h){
        length=l;
        width=w;
        height=h;
    }

    friend double Calculate_Vol(Box &b);
};

double Calculate_Vol(Box &b){
    return b.length * b.width * b.height;
}

int main(){
    Box box(5.0, 4.0, 3.0);
    double volume = Calculate_Vol(box);
    cout << "Volume of the box: " << volume << endl;

    return 0;
}