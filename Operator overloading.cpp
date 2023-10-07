#include <iostream>
using namespace std;
class Distance
{
    public:
        int feet, inches;
    public:
        void setDistance(void)
        {
            cout << "Enter feet: ";
            cin >> feet;
            cout << "Enter inches: ";
            cin >> inches;
        }
        void display(void)
        {
            cout << "Feet: " << feet << "Inches: " << inches << endl;
        }
        Distance operator+(Distance& dist1)
        {
            Distance temp;
            temp.inches = inches + dist1.inches;
            temp.feet = feet + dist1.feet + (temp.inches / 12);
            temp.inches = temp.inches % 12;
            return temp;
         }
        Distance operator<(Distance& dist1)
        {
            Distance temp;
            temp.inches = inches + dist1.inches;
            temp.feet = feet + dist1.feet + (temp.inches / 12);
            temp.inches = temp.inches % 12;
            return temp;
        }
        Distance operator==(Distance& dist1)
        {
            Distance temp;
            temp.inches = inches + dist1.inches;
            temp.feet = feet + dist1.feet + (temp.inches / 12);
            temp.inches = temp.inches % 12;
            return temp;
        }
        Distance operator*=(Distance& dist1)
        {
            Distance temp;
            temp.inches = inches + dist1.inches;
            temp.feet = feet + dist1.feet + (temp.inches / 12);
            temp.inches = temp.inches % 12;
            int x;
            cout<<"enter the integer:";
            cin>>x;
            feet*=x;
            inches*=x;
            cout<<"\n\nthe multiplied distance is:"<<feet<<" "<<inches;
            cout<<"\n";
            return temp;
        }
};

int main()
{
    int choice;
    cout<<"Enter the choice: ";
    cin>>choice;
    Distance D1, D2, D3,D4,D5;
    cout << "Enter first distance:" << endl;
    D1.setDistance();
    cout << endl;
    cout << "Enter second distance:" << endl;
    D2.setDistance();
    cout << endl;
    switch(choice)
    {
    case 1:
        D3 = D1 + D2;
        cout << "Total Distance:" << endl;
        D3.display();
        break;
    
    case 2:
        if(D1.feet<D2.feet&&D1.inches<D2.inches||D1.feet<D2.feet&&D2.inches>D1.inches||D2.feet<D1.feet&&D2.inches<D1.inches)
        {
            D2.display();
            cout<<"they are greater";
        }
        else
        {
            D1.display();
            cout<<"they are greater";
        }
        break;
    case 3:
        if(D1.feet==D2.feet && D1.inches==D2.inches )
        {
            cout<<"they are equal";
        }
        else
        {
            cout<<"they are not equal";
        }
        break;
    case 4:
        D4=D1*=D2;
        D5=D2*=D1;
        break;
        default:
        cout<<"invalid";
    }
    return 0;
}