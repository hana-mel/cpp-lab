#include <iostream>
using namespace std;

template <class temp>  
temp add(temp a, temp b)
{
    return a + b;
}

int main()
{
    cout<<"two number: "<<add(5,7)<<endl;
    cout<<"two decimals: "<<add(1.5,2.5)<<endl;
    return 0;
}

