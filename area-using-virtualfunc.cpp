#include <iostream>
using namespace std;

class geo
{
public:
    virtual void area()    
    {
        cout << "Area of shape:" << endl;
    }
};

class rectangle : public geo
{
    float length, breadth;

public:
    void read()
    {
        cout << "Enter length and breadth of rectangle: ";
        cin >> length >> breadth;
    }
    void area() override
    {
        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class triangle : public geo
{
    float base, height;
public:
    void read()
    {
        cout << "Enter base and height of triangle: ";
        cin >> base >> height;
    }
    void area() override
    {
        cout << "Area of Triangle = " << 0.5 * base * height<<endl;
    }
};

void display(geo &s)
{
    s.area();   
}

int main()
{
    rectangle rect;
    rect.read();
    display(rect);   // call using reference, not pointer

    triangle tri;
    tri.read();
    display(tri);    // call using reference, not pointer

    return 0;
}
