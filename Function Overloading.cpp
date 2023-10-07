/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <iostream>
using namespace std;
 
void print(int i) 
{
  cout << " Here is int " << i << endl;
}

void print(double  f) 

{
  cout << " Here is float " << f << endl;
}
void print(char const *c) 

{
  cout << " Here is char " << c << endl;
}
 
int main() 
{
  print(10);
  print(10.12);
  print("ten");
  return 0;
}
