#include <iostream>
using namespace std;

template <typename T>
class stack
{
    T st[6];
    int top;
public:
    stack()
    {
        top = -1;
    }
    void push()
    {
        if(top < 5)
        {
            T val;
            cout<<"Enter value to be pushed to stack: ";
            cin>>val;
            st[++top] = val;
            cout<<"Pushed "<<val<<" to stack"<<endl;
        }
        else
        {
            cout<<"Overflow\n";
        }
    }
    T pop()
    {
        T x;
        if(top == -1)
        {
            cout<<"Underflow\n";
            return T();
        }
        else
        {
            x = st[top];
            top--;
            cout<<x<<" popped from stack"<<endl;
        }
        return x;
    }
    void display()
    {
        if(top == -1)
        {
            cout<<"Stack is empty\n";
        }
        else
        {
            cout<<"Stack: ";
            for(int i = top;i>=0;i--)
            {
                cout<<st[i]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int ch;
    stack<float>obj;
    cout<<"MENU\n1.Push\n2.Pop\n3.Display\n4.Exit"<<endl;
    do
    {
        cout<<"Enter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
                obj.push();
                break;
            case 2:
                obj.pop();
                break;
            case 3:
                obj.display();
                break;
            case 4:
                cout<<"Exiting\n";
                break;
            default:
                cout<<"Invalid choice\n";
        }
    }while(ch != 4);
    return 0;
}
