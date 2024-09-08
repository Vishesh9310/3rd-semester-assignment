//write a c++ program to create and display an original three-digit numbers using 1,2,3,4 also count how many three-digit numbers are there.
/*
Output:
The three-digit numbers are:
123 124 132 134 142 143 213 214 231 234 241 243 312 314 321 324 341 342 412 413 421 423 431 432
Total numbers of the three-digit-number is: 24

*/
#include <iostream>
using namespace std;

int main() {
    int count = 0;
    
    cout << "Three-digit numbers are:\n";

    // Iterate over all combinations of three digits
    for (int i = 1; i <=4; i++) {
        for (int j = 1; j <=4; j++) {
            for (int k = 1; k <=4; k++) {
                // Form a three-digit number
                if(k !=i && k!= j && i!= j){
                    count++;
                    cout<<i<<j<<k<<" ";
                }
            }
        }
    }

    cout<<"\nTotal number of three-digit numbers: "<<count<<endl;

    return 0;
}