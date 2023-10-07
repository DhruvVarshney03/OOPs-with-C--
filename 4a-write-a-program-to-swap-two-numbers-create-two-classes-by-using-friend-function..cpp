/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class A1;

class A2{
    private:
    public:
        int b;
        A2(int x){
            b = x;
        }
        void display(){
            cout<<"b = "<<b<<endl;
        }
        friend void swap(A1 , A2 );

};

class A1{
    private:
    public:
        int a;
        A1(int x){
            a = x;
        }
        void display(){
            cout<<"a = "<<a<<endl;
        }
        friend void swap(A1 , A2 );
};

void swap(A1 *first, A2 *second){
    int temp = first->a;
    first->a = second->b;
    second->b = temp;
    }

int main(){
    A1 first(500);
    A2 second(200);
    swap(&first, &second);
    cout<< "After swapping: "<<endl;
    cout<< "First: "<<endl;
    first.display();
    cout<< "Second: "<<endl;
    second.display();
    return 0;
}