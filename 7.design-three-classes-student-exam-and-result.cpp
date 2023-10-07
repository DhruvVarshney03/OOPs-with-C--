/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class student
{
    public:
        int rollno;
        string name;
        void getrollno()
        {
            cout<<"Enter roll no. :";
            cin>>rollno;
        }
        void getname()
        {
            cout<<"Enter name :";
            cin>>name;
        }
};

class exam: public student
{
    protected:
    int subject_1;
    int subject_2;
    int subject_3;
    int subject_4;
    int subject_5;
    int subject_6;
    public:
    void marks()
    {
        cout<<"Enter marks in Subject 1: ";
        cin>>subject_1;
        cout<<"Enter marks in Subject 2: ";
        cin>>subject_2;
        cout<<"Enter marks in Subject 3: ";
        cin>>subject_3;
        cout<<"Enter marks in Subject 4: ";
        cin>>subject_4;
        cout<<"Enter marks in Subject 5: ";
        cin>>subject_5;
        cout<<"Enter marks in Subject 6: ";
        cin>>subject_6;
    }
    void getMarks()
    {
        cout << "Marks received in Subject 1: " << subject_1 << endl;
        cout << "Marks received in Subject 2: " << subject_2 << endl;
        cout << "Marks received in Subject 3: " << subject_3 << endl;
        cout << "Marks received in Subject 4: " << subject_4 << endl;
        cout << "Marks received in Subject 5: " << subject_5 << endl;
        cout << "Marks received in Subject 6: " << subject_6 << endl;
        }
    void total_marks()
    {
        int total=subject_1+subject_2+subject_3+subject_4+subject_5+subject_6;
    }
};

class result: public exam
{   
    public:
    
    void display()
    {
        cout<<"The percentage of "<<name<<rollno<<"is"<<total<<endl;
    }
};
int main()
{
    student s;
    exam e;
    result r;
    s.getrollno();
    s.getname();
    e.marks();
    r.display();
    return 0;
}
