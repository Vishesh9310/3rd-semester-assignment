/*
Q3- Write a class Employee that has a static data member count to keep track of the number of employees created.
Display the count each time a new employee object is created.
*/

#include <iostream>
using namespace std;

class Employee{
    
    static int count;
    int objno;

    public:
    Employee(){
        objno=++count;
    }

    ~Employee(){
        --count;
    }

    void count_print(){
        cout<<"count: "<<count<<endl;
    }
};

int Employee::count;

int main(){
    Employee e1,e2;
    e1.count_print();

    return 0;
}