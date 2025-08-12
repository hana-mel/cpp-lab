#include<iostream>
#include<string.h>
using namespace std;
class student
{
public:
    string name;
    int roll_no,marks;
public:
    void read();
    void disp();
};

void student::read()
{
    cin.ignore();
    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your roll number: ";
    cin>>roll_no;
    cout<<"Enter marks obtained: ";
    cin>>marks;
}

void student::disp()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Roll number: "<<roll_no<<endl;
    cout<<"Marks: "<<marks<<endl;
    cout<<endl;
}

int main()
{
    int i,j,n,temp;
    student s[100];
    cout<<"How many students?"<<endl;
    cin>>n;
    for(int i = 0;i < n;i++)
    {
        s[i].read();
    }
    for( i = 0;i < n - 1;i++)
    {
        for(j = 0;j < n - i - 1;j++)
        {
            if(s[j].marks > s[j+1].marks)
            {
                student temp = s[j];
                s[j] = s[j+1];
                s[j+1] = temp;
            }
        }
    }
    cout<<"Student details: "<<endl;
    for(int i = 0;i < n;i++)
    {
        s[i].disp();
    }
    return 0;
}
