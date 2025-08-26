#include <iostream>
using namespace std;

class student
{
    string name;
    int reg_no;
    float mk1,mk2,mk3,avg = 0;
public:
    void read();
    void comp();
    void disp();
};

void student::read()
{
    cout<<"Enter student name: "<<endl;
    getline(cin,name);
    cout<<"Enter registration number: "<<endl;
    cin>>reg_no;
    cout<<"Enter marks for 3 subjects: "<<endl;
    cin>>mk1>>mk2>>mk3;
}

void student::comp()
{
    avg = (mk1 + mk2 + mk3)/3;
}

void student::disp()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Registration number: "<<reg_no<<endl;
    cout<<"Marks for 1st subject: "<<mk1<<endl;
    cout<<"Marks for 2nd subject: "<<mk2<<endl;
    cout<<"Marks for 3rd subject: "<<mk3<<endl<<endl;
    cout<<"Average marks = "<<avg;
}

int main()
{
    student s;
    s.read();
    s.comp();
    s.disp();
    return 0;
}



