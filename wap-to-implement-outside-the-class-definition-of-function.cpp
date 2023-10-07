/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// WAP to implement outside the class definition of function
#include<iostream>
using namespace std;
class function
{
    private:
    int a;
    public:
    void students();
};
void function::students()
{
    cout<<"enter the roll number:";
    cin>>a;
}

int main()
{
    
    function f1;
    f1.students();
    return 0;
}