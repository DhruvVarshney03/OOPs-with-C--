#include <iostream>
using namespace std;

class Student
{
    protected:
        int rollNo;
        string name;
    public:
        void setDetails()
        {
            cout << "Enter the name of the student: ";
            cin >> name;
            cout << "Enter the roll no of the student: ";
            cin >> rollNo;
        }
        void getDetails()
        {
            cout << "Roll No: " << rollNo << endl;
            cout << "Name: " << name << endl;
        }

};

class Exam : public Student
{
    protected:
        int sub1;
        int sub2;
        int sub3;
        int sub4;
        int sub5;
        int sub6;
    public:
        void setMarks()
        {
            cout << "Enter marks in Subject 1: ";
            cin >> sub1;
            cout << "Enter marks in Subject 2: ";
            cin >> sub2;
            cout << "Enter marks in Subject 3: ";
            cin >> sub3;
            cout << "Enter marks in Subject 4: ";
            cin >> sub4;
            cout << "Enter marks in Subject 5: ";
            cin >> sub5;
            cout << "Enter marks in Subject 6: ";
            cin >> sub6;
        }
        void getMarks()
        {
            cout << "Marks received in Subject 1: " << sub1 << endl;
            cout << "Marks received in Subject 2: " << sub2 << endl;
            cout << "Marks received in Subject 3: " << sub3 << endl;
            cout << "Marks received in Subject 4: " << sub4 << endl;
            cout << "Marks received in Subject 5: " << sub5 << endl;
            cout << "Marks received in Subject 6: " << sub6 << endl;
        }
        void totaMarks()
        {
            int total = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
            
        }

};

class Result : public Exam
{
    private:
        int totalMarks;
    public:
        void totaMarks()
        {
            int totalMarks = sub1 + sub2 + sub3 + sub4 + sub5 + sub6;
        }
        void result()
        {
            if (totalMarks >= 240)
            {
                cout << name << " has passed!";
            } else
            {
                cout << name << " has failed!";
            }
            
            
        }
};

int main()
{
    Result A;
    A.setDetails();
    A.setMarks();
    A.totaMarks();
    A.result();

    return 0;
}