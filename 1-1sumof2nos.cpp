#include <iostream>
using namespace std;
class temp
{
    int x,y;
public:
    void addn()
    {
        cout<<"Enter any two numbers:";
        cin>>x>>y;
        cout<<"The sum is = "<<x + y<<endl;
    }
};

int main()
{
    temp t1;
    t1.addn();
    return 0;
}
