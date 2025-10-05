#include <iostream>
#include <cmath>     
using namespace std;

class power
{
public:
    int calc(int x, int y = 2)
    {
        return pow(x,y);
    }
};

int main()
{
    power p;
    int x, y;
    char ch;

    cout<<"Enter value of x: ";
    cin>>x;

    cout<<"Enter value of y? (y/n): ";
    cin>>ch;

    if (ch== 'y' || ch== 'Y')
    {
        cout<<"Enter value of y: ";
        cin>>y;
        cout<<"Result: "<<p.calc(x,y)<<endl;
    }
    else
    {
        cout<<"Result:"<<p.calc(x)<<endl;
    }
    return 0;
}
