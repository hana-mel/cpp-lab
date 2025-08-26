#include<iostream>
using namespace std;

class employee
{
    int emp_no;
    string ename;
    float bas_sal;
    float da,it,net_sal;
public:
    void read();
    void calc();
    void disp();
};

void employee::read()
{
    cout<<"Enter employee name: "<<endl;
    getline(cin,ename);
    cout<<"Enter employee number: "<<endl;
    cin>>emp_no;
    cout<<"Enter the basic salary: ";
    cin>>bas_sal;
}

void employee::calc()
{
    da = (0.52)*bas_sal;
    it = (0.30)*(bas_sal + da);
    net_sal = bas_sal + da - it;
}

void employee::disp()
{
    cout<<"Name: "<<ename<<endl;
    cout<<"Employee number: "<<emp_no<<endl;
    cout<<"Basic salary: "<<bas_sal<<endl;
    cout<<"Dear allowance: "<<da<<endl;
    cout<<"Income tax: "<<it<<endl;
    cout<<"Net salary: "<<net_sal<<endl;
}

int main()
{
    employee y1;
    y1.read();
    y1.calc();
    y1.disp();
    return 0;
}
//enter basic salary as 100 for lab record
