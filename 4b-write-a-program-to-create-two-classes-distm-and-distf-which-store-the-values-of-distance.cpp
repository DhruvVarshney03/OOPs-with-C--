/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class DistF;

class DistM{
    private:
        int meters,centimeters;
    public:
    DistM(int m, int cm){
        meters = m;
        centimeters = cm;
    }
    void display(){
        cout<<meters<<" meters and "<<centimeters<<" centimeters"<<endl;
    }
    friend DistM add(DistM , DistF );
};

class DistF{
    private:
        int feet,inches;
    public:
    DistF(int f, int i){
        feet = f;
        inches = i;
    }
    void display(){
        cout<<feet<<" feet and "<<inches<<" inches"<<endl;
    }
    friend DistM add(DistM , DistF );
};

DistM add(DistM first, DistF second){
    int m = first.meters + second.feet*0.3048;
    int cm = first.centimeters + second.inches*2.54;
    return DistM(m,cm);
}

int main(){
    DistM first(2,10);
    DistF second(6,1);
    DistM third = add(first,second);
    cout<< "First: "<<endl;
    first.display();
    cout<< "Second: "<<endl;
    second.display();
    cout<< "Third: "<<endl;
    third.display();
    return 0;
}