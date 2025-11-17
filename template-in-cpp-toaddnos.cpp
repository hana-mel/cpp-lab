#include <iostream>
using namespace std;

template<class temp>
class calc
{
    double a,b;
public:
    void read()
    {
        cout<<"Enter any value of a and b:"<<endl;
        cin>>a>>b;
    }
    temp addn()
    {
        return a+b;
    }
    void disp()
    {
        cout<<"Sum is: "<<addn();
    }
};

int main()
{
    calc<double>obj;
    obj.read();
    obj.disp();
    return 0;
}
