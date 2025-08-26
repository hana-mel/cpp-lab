#include <iostream>
using namespace std;

class circle
{
    int rad;
    const float pi=3.14;
    float area;
public:
    void read();
    void calc();
    void disp();
};

void circle::read()
{
    cout<<"Enter the radius: ";
    cin>>rad;
}

void circle::calc()
{
    area = pi*(rad*rad);
}

void circle::disp()
{
    cout<<"Area of circle with radius "<<rad<<" = "<<area<<endl;
}

int main()
{
    circle c1;
    c1.read();
    c1.calc();
    c1.disp();
    return 0;
}
