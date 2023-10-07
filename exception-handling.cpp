#include <iostream>
#include<conio.h>
using namespace std;
int divide(int a, int b)
{
    if( b == 0 )
    {
        throw "divide by zero!";
    }
    return (a/b);
}
int main()
{
    int a,b=0,c;
    cout<<"Enter the number";
    cin>>a;
    try
    {
        c=divide(a,b);
        cout<<c<<endl;
    }
    catch(const char* ex)
    {
        cout<<ex<<endl;
    }
    return 0;
}
