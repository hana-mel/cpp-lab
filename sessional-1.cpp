#include<iostream>
using namespace std;
class inches;
class feet
{  
    int height_feet;
public:
    feet(int h)
    {
        height_feet = h;
    }
    void disp(int height)
    {
        cout<<"Height: "<<height<<endl;
    }
    friend void fun(feet,inches);
};

class inches
{  
    int height_inches;
public:
    inches(int h)
    {
        height_inches = h;
    }
    void disp(int height)
    {
        cout<<"Height: "<<height<<endl;
    }
    friend void fun(feet,inches);
};

void fun(feet f,inches i)
{
    float tot_inches = (f.height_feet*12) + (i.height_inches);
    cout<<"Total height in inches: "<<tot_inches<<endl;
}

int main()
{
    int hf,hi;
    cout<<"Enter height in feet: ";
    cin>>hf;
    cout<<"Enter height in inches: ";
    cin>>hi;
    feet ob1(hf);
    inches ob2(hi);
    fun(ob1,ob2);
    return 0;
}
    
