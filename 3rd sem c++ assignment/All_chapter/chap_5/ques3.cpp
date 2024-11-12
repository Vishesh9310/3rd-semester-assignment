/*
Q3- Create a base class Animal with a virtual function sound().
Derive classes Dog and Cat that override the sound() function.
Create objects of Dog and Cat using Animal pointers and call sound().
*/

#include <iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){
        cout<<"Animal Sound"<<endl;
    }
};

class Dog:public Animal{
    public:
    void sound(){
        cout<<"Woof Woof"<<endl;
    }
};

class Cat:public Animal{
    public:
    void sound(){
        cout<<"Meow Meow"<<endl;
    }
};

int main(){
    Dog dog;
    Cat cat;

    Animal* animal_ptr1 = &dog;
    Animal* animal_ptr2 = &cat;

    animal_ptr1->sound();
    animal_ptr2->sound();
    
    return 0;
}