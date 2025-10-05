#include <iostream>
using namespace std;

class matx
{
    int a[10][10];
    int r, c;

public:
    void read();
    void disp();
    matx operator+(matx ob);
};

void matx::read()
{
    cout<<"Enter number of rows and columns: ";
    cin>>r>>c;

    cout<<"Enter elements of the matrix:";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin>>a[i][j];
        }
    }
}

void matx::disp()
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout << endl;
    }
}

matx matx::operator+(matx ob)
{
    matx temp;
    temp.r = r;
    temp.c = c;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            temp.a[i][j] = a[i][j] + ob.a[i][j];
        }
    }
    return temp;
}

// Main function
int main()
{
    matx t1, t2, t3;

    cout << "First matrix\n";
    t1.read();

    cout << "\nSecond matrix\n";
    t2.read();

    cout << "\nFirst Matrix:\n";
    t1.disp();

    cout << "\nSecond Matrix:\n";
    t2.disp();

    t3 = t1 + t2;

    cout << "\nMatrix after addition:\n";
    t3.disp();

    return 0;
}
