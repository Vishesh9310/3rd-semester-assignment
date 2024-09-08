//write a program in c++ that converts kilometers per hour to miles per hour.
/*
output:
Convert kilometers per hour to miles per hour.
Input the distance in kilometer: 25 The 25 Km/hr.
means 15.5343 Miles/hr.
*/
#include <iostream>
using namespace std;

int main(){
    int km;
    cout<<"Convert kilometers per hour to miles per hour: ";
    cin>>km;

    float miles=km*0.6213712;
    cout<<"Input the distance in kilometer: "<<km<<" The "<<km<<" Km/hr. means "<<miles<<" Miles/hr."<<endl;
   

    return 0;
}