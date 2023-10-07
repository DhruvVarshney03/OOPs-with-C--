/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;
 
class X
{
public:
    // constructor
    X()
    {
        cout<<"Constructor called"<<endl;
    }
 
    // destructor
    ~X()
    {
        cout<<"Destructor called"<<endl;
    }
};
 
int main()
{
    X x1;   // Constructor Called
    int a = 1;
    if(a==1)
    {
        X x2;  // Constructor Called
    }  // Destructor Called for z2
} 

