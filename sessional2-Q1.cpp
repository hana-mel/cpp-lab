#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int *a = new int[n];
    cout<<"Enter "<<n<<" elements of array:"<<endl;
    for(int i =0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum =0;
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    int avg = sum/n;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Avg: "<<avg<<endl;
    delete[] a;
    return 0;
}
