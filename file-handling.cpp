#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
    ifstream fin("my_data.txt");
    int x;
    x=strlen("my_data.txt");
    cout<<x;
    int count=0;
    char ch[20],c[20];
    cout<<"\nEnter any word which u want to count :: ";
    cin>>c;
    
    while(fin)
    {
        fin>>ch;
        if(strcmp(ch,c)==0)
        count++;
    }
    
    cout<<"\nOccurrence="<<count<<"\n";
    fin.close();
    return 0;
}