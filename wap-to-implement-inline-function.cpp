/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// WAP to implement inline function

#include <iostream>

using namespace std;

inline int sq(int s)
{
    return s*s;
}
int main()
{
    cout << "The cube of 3 is: " << sq(3) << "\n";
    return 0;
}

