#include <iostream>
#include <string>
using namespace std;

int o_func(string s = "SIKKIM")
{
    return s.size();
}

int o_func(int a[],int n = 10)
{
    int sum =0;
    for(int i =0;i<n;i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int main()
{
    cout<<"Size of default string: "<<o_func()<<endl;
    cout<<"Size of 'hanamelrisaw':"<<o_func("hanamelrisaw")<<endl;
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"Sum: "<<o_func(a)<<endl;
    cout<<"Sum: "<<o_func(a,6)<<endl;
    return 0;
}
