#include <iostream>
using namespace std;
#define MAX 5

class Stack
{
    int top;

public:
    int a[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    void push(int x);
    int pop();
    int isEmpty();
    int stackTop();
    int size();
    void display(Stack st);
};

void Stack::push(int x)
{
    int c;
    if (top >= (MAX - 1))
    {
        cout << "Stack Overflow";
    }
    else
    {
        a[++top] = x;
        c++;
    }
}

int Stack::isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
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

int Stack::stackTop()
{
    return top;
}

int Stack::size()
{
    return (top + 1);
}

void Stack::display(Stack st)
{
    while (!st.isEmpty())
    {
        int data = st.pop();
        cout<<data<<"\n";
    }
}



void copy(Stack st1, Stack st2)
{
    Stack tempSt;
    int s = st1.size();
    int ele;
    for (int i = 0; i < s; i++)
    {
        ele = st1.pop();
        tempSt.push(ele);
    }

    for (int i = 0; i < s; i++)
    {
        ele = tempSt.pop();
        st2.push(ele);
    }

    cout<<"\nCopied stack:\n";
    st2.display(st2);    
}

int main()
{
    Stack stack1;
    Stack stack2;

    int ch, ele, temp=1;
    cout << "Enter elements of stack";
    cout << "\n Press 1 to Enter an element \n Press 2 to view stack \n Press 3 to exit";
    while (temp)
    {
        cout << "\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter an element: ";
            cin >> ele;
            stack1.push(ele);
            cout << "\n" << ele << " pushed into stack\n";
            break;
        case 2:
            stack1.display(stack1);
            break;
        case 3:
            cout << "\nExit\n";
            temp=0;
            break;
        default:
            cout << "\nIncorrect input\n";
            break;
        }
    }

    cout << "\n1st stack:\n";
    stack1.display(stack1);
    copy(stack1, stack2);
}