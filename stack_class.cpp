#include <iostream>

using namespace std;
#define MAX 1000

class Stack
{
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    void push(int x);
    int pop();
    int peek();
    int isEmpty();
    int isFull();
};

void Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        a[++top] = x;
        cout << x << " pushed into stack\n";
    }
}

int Stack::pop()
{
    if (top < 0)
    {
        cout << "Stack Underflow";
        return 0;
    }
    else
    {
        int x = a[top--];
        return x;
    }
}
int Stack::peek()
{
    if (top < 0)
    {
        cout << "Stack is Empty";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

int Stack::isEmpty()
{
    return (top < 0);
}

int Stack::isFull()
{
    return (top > 0);
}
