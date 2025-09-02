#include <iostream>
using namespace std;

class xyz
{
    int hr,min;
public:
    void read();
    void disp();
    xyz operator+(xyz);
};

void xyz::read()
{
    cout<<"Enter the hours and minutes: "<<endl;
    cin>>hr>>min;
}

void xyz::disp()
{
    cout<<"Total time: "<<hr<<" hours "<<min<<" mins"<<endl;
}

xyz xyz::operator+(xyz ob)
{
    xyz temp;
    temp.hr = hr + ob.hr;
    temp.min = min + ob.min;
    if(temp.min>=60)
    {
        temp.min = temp.min - 60;
        temp.hr = temp.hr + 1;
    }
    
    return temp;
}

int main()
{
    xyz ob1,ob2,ob3;
    ob1.read();
    ob2.read();
    ob3 = ob1 + ob2;
    ob3.disp();
    return 0;
}
