#include <iostream>
using namespace std;

class geo
{
public:
    virtual void area() = 0;
    virtual void read() = 0;
};

class triangle:public geo
{
    int b,h;
public:
    void read() 
    {
        cout<<"Enter base and height: ";
        cin>>b>>h;
    }
    void area() 
    {
        cout<<"Area: "<<0.5*b*h<<endl;
    }
};

class rectangle:public geo
{
    int l,b;
public:
    void read()
    {
        cout<<"Enter length and breadth: ";
        cin>>l>>b;
    }
    void area() 
    {
        cout<<"Area: "<<l*b;
    }
};

int main()
{
    geo *ptr;
    triangle t;
    ptr = &t;
    ptr->read();
    ptr->area();
    rectangle r;
    ptr = &r;
    ptr->read();
    ptr->area();
    return 0;
}
