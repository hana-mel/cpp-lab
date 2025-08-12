#include<iostream>
#include<string.h>
using namespace std;
class temp
{
    string name;
    int roll_no;
public:
    void display()
    {
        cout<<"Enter your name: ";
        getline(cin,name);
        cout<<"Enter your roll number: ";
        cin>>roll_no;
        cout<<"Name - "<<name<<endl<<"Roll Number - "<<roll_no<<endl;
    }
};

int main()
{
    temp t1;
    t1.display();
    return 0;
}
