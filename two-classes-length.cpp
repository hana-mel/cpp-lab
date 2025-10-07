#include <iostream>
using namespace std;

class db;
class dm
{
    int mtr;
    int cm;
public:
    void read()
    {
        cout<<"Enter distance in meters and centimeters: "<<endl;
        cin>>mtr>>cm;
    }
    void disp()
    {
        cout<<"Length is "<<mtr<<" meters and "<<cm<<" centimeters"<<endl;
    }
    friend db calc(dm, db);
};

class db
{
    int feet;
    int inch;
public:
    void read()
    {
        cout<<"Enter distance in feet and inches: "<<endl;
        cin>>feet>>inch;
    }
    void disp()
    {
        cout<<"Length is "<<feet<<" feet and "<<inch<<" inches"<<endl;
    }
    friend db calc(dm , db);
};

db calc(dm x,db y)
{
    db temp;
    float tot_inchs = (x.mtr * 100 + x.cm)/2.54+ (y.feet*12+y.inch);
    temp.feet = tot_inchs/12;
    temp.inch = (tot_inchs - temp.feet*12);
    return temp;
}

int main()
{
    dm obj;
    obj.read();
    db obj1,obj2;
    obj1.read();
    obj2 = calc(obj,obj1);
    obj2.disp();
}


