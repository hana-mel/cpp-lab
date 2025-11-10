#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int z;
    z = x;
    x = y;
    y = z;
}

int main()
{
    int a,b;
    cout<<"Enter 2 numbers: "<<endl;
    cin>>a>>b;
    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<<a<<" "<<b;
    return 0;
}
