//write a c++ program that accepts the radius of a circle from the user and computes the area and circumference.
/*
Output:
Find the area and circumference of any circle:
Input the radius (1/2 of diameter) of circle: 5
The are of the circle is: 78.5397
The circumference of the circle is: 31.41559
*/

#include<iostream>
#define pi 3.14
using namespace std;

int main(){
    int radius;
    cout<<"Find the area and circumference of any circle:\nInput the radius (1/2 of diameter) of circle: ";
    cin>>radius;
    
    float area= pi*radius*radius;
    cout<<"The are of the circle is: "<<area<<endl;
    
    float circum= 2*pi*radius;
    cout<<"The circumference of the circle is: "<<circum;

    return 0;
}