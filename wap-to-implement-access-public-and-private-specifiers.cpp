/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// WAP to implement access public and private specifiers
#include<iostream>
using namespace std;
 
class Circle
{  
    private:
        double radius;
     
    public:   
        void compute_area(double r)
        {   // member function can access private
            // data member radius
            radius=r;
             
            double area=(22/7)*radius*radius;
             
            cout << "Radius is: "<<radius<< endl;
            cout << "Area is: "<<area;
        }
     
};
 

int main()
{  

    Circle obj;
    obj.compute_area(7);
     
    return 0;
}

