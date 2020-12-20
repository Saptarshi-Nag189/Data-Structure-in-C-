
#include <iostream>

using namespace std;

#define MAX 4

class Stack
{
    int top;

public:
    int a[MAX]; 

    Stack() { top = -1; }
    void push(int x);
    int pop();
    int peek();
    void isEmpty();
    void isFull();
};

void Stack::push(int x)
{
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow\n";
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
        cout << "Stack Underflow\n";
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
        cout << "Stack is Empty\n";
        return 0;
    }
    else
    {
        int x = a[top];
        return x;
    }
}

void Stack::isEmpty()
{
    if (top==0)
        cout<<"stack is empty\n";
    else 
        cout << "stack is not empty\n";
}

void Stack::isFull()
{
    if (top < 0)
        cout<<"stack is full"<<"\n";
    else
        cout<<"stack is not full"<<"\n";
}



int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.isFull();
    s.isEmpty();
    s.peek();
    cout << s.pop() << " Popped from stack\n";
    return 0;
}
