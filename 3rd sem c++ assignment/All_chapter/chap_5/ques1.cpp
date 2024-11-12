/*
Q1- Create a base class Person with attributes like name and age.
Create a derived class Student that adds a grade attribute.
Demonstrate single inheritance by creating a Student object.
*/

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
public:
    Person(string n, int a){
        name=n;
        age=a;
    }

    void displayPerson(){
        cout << "Name: " << name << ", Age: " << age << endl;
    }

};

class Student: public Person{
    char grade;
public:
    Student(string n, int a, char g):Person(n, a){
        grade=g;
    }

    void displayStudent(){
        cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;
    }
};

int main(){
    Student s1("Vishesh",19,'A');
    s1.displayStudent();
    
    return 0;
}