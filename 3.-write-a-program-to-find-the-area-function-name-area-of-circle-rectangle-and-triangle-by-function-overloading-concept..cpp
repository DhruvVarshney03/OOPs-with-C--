/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;


int area(int s)
{
    return(s*s);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
   return((bs*ht)/2);
}

int main()
{
        int s,l,b;
        float r,bs,ht;
        cout<<"Enter side of a square:";
        cin>>s;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"Enter radius of circle:";
        cin>>r;
        cout<<"Enter base and height of triangle:";
        cin>>bs>>ht;
        cout<<"Area of square is"<<area(s);
        cout<<"\nArea of rectangle is "<<area(l,b);
        cout<<"\nArea of circle is "<<area(r);
        cout<<"\nArea of triangle is "<<area(bs,ht);
}

