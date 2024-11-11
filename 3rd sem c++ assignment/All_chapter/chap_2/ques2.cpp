/*
Q2- Implement a class Book that has a copy constructor.
Initialize one Book object and create another by copying the first one.
Display the details of both objects to verify the copy constructor’s functionality.
*/

#include <iostream>
using namespace std;

class Book{
    public:
    string name;
    int cost;

    Book(){};

    Book(string name, int cost){
        this->name = name;
        this->cost = cost;
    }

    Book(Book &obj){
        name = obj.name;
        cost = obj.cost;
    }

    void display(){
        cout<<"Name of the Book: "<<name<<endl;
        cout<<"Cost of the Book: "<<cost<<endl;
    }
};

int main(){
    Book b1("champak",30);
    b1.display();
    
    Book b2(b1);
    b2.display();

    return 0;
}