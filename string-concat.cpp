#include <iostream>
#include <string>
using namespace std;

class over
{
    string str;

public:
    
    void read();
    void disp();
    over operator+(over obj);
};

void over::read()
{
    getline(cin, str);
}

void over::disp()
{
        cout << str << endl;  
}

over over::operator+(over obj)
{
        over temp;
        temp.str = str + obj.str;  
        return temp;
}

int main()
{
    over s1, s2, s3;
    cout<<"Enter first string:\n";
    s1.read();
    cout<<"Enter second string:\n";
    s2.read();

    s3 = s1 + s2;   

    cout<<"Concatenated string"<<endl;
    s3.disp();

    return 0;
}
