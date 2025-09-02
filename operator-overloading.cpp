#include <iostream>
using namespace std;

class xyz
{
    int a,b;
public:
    void read();
    void disp();
    xyz operator++();
};

void xyz::read()
{
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
}

void xyz::disp()
{
    cout<<a<<" "<<b<<endl;
}

xyz xyz::operator++()
{
    xyz temp;
    temp.a = ++a;
    temp.b = ++b;
    return temp;
}

int main()
{
    xyz ob1;
    ob1.read();
    ++ob1;
    ob1.disp();
    return 0;
}
