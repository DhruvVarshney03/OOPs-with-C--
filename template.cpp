#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
template<class Type>
class Stack
{
    Type s[10];
    int top,n;
    public:
        Stack()
        {
            top=-1;
            cout<<"\n\tEnter the Stack Size : ";
            cin>>n;
        }
        void push(Type elt)
        {
            if(top<n-1)
            s[++top]=elt;
            else
            cout<<"\n\tstack is full.Can't insert "<<elt<<endl;
        }
        void pop()
        {
            if(top<0)
            cout<<"\n\tstack is empty.\n";
            else
            cout<<"\n\tPoped elt : "<<s[top--];
        }
        void stack_operation();
};

template<class Type>
void Stack<Type> :: stack_operation()
{
    int choice=1,i;
    Type element;
    while(choice>0 && choice<3)
    {
        cout<<"\n\n\t1.PUSH\t2.POP\tPress 0 To Exit\n\tChoice : ";
        cin>>choice;
        switch(choice)
        {
            case 1 :
                cout<<"\n\tEnter the Elt to push : ";
                cin>>element;
                push(element);
                cout<<"\n\t\tstack content :\n\n\t";
                for(i=0;i<=top;i++)
                    cout<<s[i]<<"\t";
                break;
            case 2 : //pop
                pop();
                cout<<"\n\t\tstack content :\n\n\t";
                for(i=0;i<=top;i++)
                    cout<<s[i]<<"\t";
                break;
            default :
                exit(0);
        }
    }
}
int main()
{
    cout<<"\n\t\tSTACK OPERATION USING TEMPLATE\n\n";
    cout<<"\n\t INT\n";
    Stack<int> stack1;
    cout<<"\n\t FLOAT\n";
    Stack<float> stack2;
    int ch;
    while(1)
    {
        cout<<"\n\t\t\tSTACK OPERATION \n\n";
        cout<<"\t1.INT STACK\t2.FLOAT STK\tPress 0 To Exit\n\tChoice : ";
        cin>>ch;
        switch(ch)
        {
            case 1 :
                stack1.stack_operation();
                break;
            case 2 :
                stack2.stack_operation();
                break;
            default :
                exit(0);
        }
    }
    return 0;
}