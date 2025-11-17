#include <iostream>
using namespace std;

class STACK
{
    int STK[20];   // stack array
    int top;       // points to current top

public:
    STACK()
    {
        top = -1;
    }

    // Overload + operator to push element
    STACK operator+(int ele)
    {
        if (top == 19)
        {
            cout << "Stack Overflow! Cannot push " << ele << endl;
            return *this;
        }
        STK[++top] = ele;
        return *this;
    }

    // Overload -- operator (postfix) to pop element
    STACK operator--(int)
    {
        if (top == -1)
        {
            cout << "Stack Underflow! Cannot pop.\n";
            return *this;
        }
        cout << "Popped element: " << STK[top] << endl;
        top--;
        return *this;
    }

    // Display stack elements
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack elements: ";
        for (int i = 0; i <= top; i++)
        {
            cout << STK[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    STACK S1;

    S1 = S1 + 10;   // push
    S1 = S1 + 20;
    S1 = S1 + 30;

    S1.display();

    S1 = S1--;      // pop top element
    S1.display();

    return 0;
}
