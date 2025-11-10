#include<iostream>
using namespace std;

class parent
{
public:
    parent()
    {
        cout<<" base class constructor "<<endl;
    }
    ~parent()
    {
        cout<<" base class destructor "<<endl;
    }
};

class child1: public parent
{
public:
    child1()
    {
        cout<<" child class 1 constructor "<<endl;
    }
    ~child1()
    {
        cout<<" child class 1 destructor "<<endl;
    }
};

class child2: public parent
{
public:
    child2()
    {
        cout<<" child class 2 constructor "<<endl;
    }
    ~child2()
    {
        cout<<" child class 2 destructor"<<endl;
    }
};

class grandc: public child1
{
public:
    grandc()
    {
        cout<<" grand child constructor"<<endl;
    }
    ~grandc()
    {
        cout<<" grand child destructor "<<endl;
    }
};

int main()
{
    {
        grandc ob1,ob2;
    }
    child2 obj;
    return 0;
}
