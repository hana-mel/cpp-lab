#include <iostream>
using namespace std;

class calc
{
    int real,complex;
public:
    void read();
    void disp();
    calc operator+(calc ob);
};

void calc::read()
{
    cout<<"Enter real part: "<<endl;
    cin>>real;
    cout<<"Enter complex part: "<<endl;
    cin>>complex;
}

void calc::disp()
{
    cout<<"The sum = "<<endl;
    cout<<real<<"+"<<complex<<"i"<<endl;
}

calc calc::operator+(calc ob)
{
    calc temp;
    temp.real = real + ob.real;
    temp.complex = complex + ob.complex;
    return temp;
}

int main()
{
    calc t1, t2, t3;
    t1.read();
    t2.read();
    t3 = t1 + t2;
    t3.disp();
    return 0;
}

