/*
Q3- Write a C++ program to open a text file in ofstream mode, write some text, and close it.
Reopen it in ifstream mode to read and display the text on the console.
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    //open text file in ofstream mode:
    ofstream myfile("vishesh.txt");

    //write some text:
    myfile <<"hello vishesh your are so smart";

    //clost this file:
    myfile.close();

    //reopen text file in ifstream mode:
    string mytext;
    ifstream Myfile("vishesh.txt");

    //read file, display these text;
    
    while( getline (Myfile,mytext)){
        cout<<mytext;
    }

    return 0;
}