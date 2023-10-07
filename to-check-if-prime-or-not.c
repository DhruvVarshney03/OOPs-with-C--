/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,i,ctr=0;
    printf("enter a number");
    scanf("%d",&n);
    
    for (i=1;i<=n;i++)
    {
        if (n%i==0)
        {
            ctr++;
        }
    }
    if (ctr==2)
    {
        printf("Prime");   
    }
    
    else
    {
        printf("Not prime");
    }
    return 0;
}
