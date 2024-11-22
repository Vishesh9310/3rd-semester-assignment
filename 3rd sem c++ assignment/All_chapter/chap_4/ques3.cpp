/*
Q3 – Write down the difference between Compile time and Runtime Polymorphism.
Explain its types with the programmatic examples of each.
*/

/*
Compile time Polymorphism:
The overloaded functions are invoked by matching the type and number of arguments.
This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time.
It is achieved by function overloading and operator overloading which is also known as static binding or early binding. 

Runtime Polymorphism:
Run time polymorphism is achieved when the object's method is invoked at the run time instead of compile time.
It is achieved by method overriding which is also known as dynamic binding or late binding.

Compile time polymorphism                                       Run time polymorphism
The function to be invoked is known at the compile time.       The function to be invoked is known at the run time.
It is also known as overloading, early binding and static binding.       It is also known as overriding, Dynamic binding and late binding.
Overloading is a compile time polymorphism where more than one method is having the same name but with the different number of parameters or the type of the parameters.      Overriding is a run time polymorphism where more than one method is having the same name, number of parameters and the type of the parameters.
It is achieved by function overloading and operator overloading.      It is achieved by virtual functions and pointers.
It provides fast execution as it is known at the compile time.       It provides slow execution as it is known at the run time.


*/

//Function overloadding:

#include <iostream>    
using namespace std;    
class Cal {    
    public:    
static int add(int a,int b){      
        return a + b;      
    }      
static int add(int a, int b, int c)      
    {      
        return a + b + c;      
    }      
};     
int main(void) {    
    Cal C;                                                    //     class object declaration.   
    cout<<C.add(10, 20)<<endl;      
    cout<<C.add(12, 20, 23);     
   return 0;    
}    

//Operator overloading:

#include <iostream>
using namespace std;

class Test    
{    
   private:    
      int num;    
   public:    
       Test(): num(8){}

       void operator ++()         {     
          num = num+2;     
       }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    Test tt;    
    ++tt;  // calling of a function "void operator ++()"    
    tt.Print();    
    return 0;    
} 

//Virtual function:

#include <iostream>  

using namespace std;  
class A  
{  
   int x=5;  
    public:  
    void display()  
    {  
        std::cout << "Value of x is : " << x<<std::endl;  
    }  
};  
class B: public A  
{  
    int y = 10;  
    public:  

    void display()  
    {  
        std::cout << "Value of y is : " <<y<< std::endl;  
    }  
};  
int main()  
{  
    A *a;  
    B b;  
    a = &b;  
   a->display();  
    return 0;  
}  