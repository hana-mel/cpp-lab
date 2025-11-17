#include<iostream>
#include<string.h>
using namespace std;
class student
{
    string name;
    int roll_no;
public:
    void read();
    void disp();
};

void student::read()
{
    cout<<"Enter your name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"Enter your roll number: ";
    cin>>roll_no;
}

void student::disp()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll number: "<<roll_no<<endl;
}

int main()
{
    int n;
    student s[10];
    cout<<"How many students?"<<endl;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        s[i].read();
    }
    cout<<"Student details: "<<endl;
    for(int i = 0;i < n;i++)
    {
        s[i].disp();
    }
    return 0;
}
