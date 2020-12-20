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
    return a[top];
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
        cout << data << "\n";
    }
}

bool isSameStack(Stack stack1, Stack stack2)
{
    bool flag = true;

    while (stack1.isEmpty() == false)
    {
        if (stack1.size() != stack2.size())
        {
            flag = false;
            return flag;
        }

        if (stack1.stackTop() == stack2.stackTop())
        {
            stack1.pop();
            stack2.pop();
        }
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    Stack stack1;
    Stack stack2;

    int ch1,ch2,ele1,ele2,temp1=1,temp2=1;
    cout << "Enter elements of stack 1";
    cout << "\n Press 1 to Enter an element \n Press 2 to view stack \n Press 3 to exit";
    while (temp1)
    {
        cout << "\n Enter your choice: ";
        cin >> ch1;
        switch (ch1)
        {
        case 1:
            cout << "Enter an element: ";
            cin >> ele1;
            stack1.push(ele1);
            cout << "\n" << ele1 << " pushed into stack\n";
            break;
        case 2:
            stack1.display(stack1);
            break;
        case 3:
            cout << "\nExit\n";
            temp1 = 0;
            break;
        default:
            cout << "\nIncorrect input\n";
            break;
        }
    }

    cout << "Enter elements of stack 2";
    cout << "\n Press 1 to Enter an element \n Press 2 to view stack \n Press 3 to exit";
    while (temp2)
    {
        cout << "\n Enter your choice: ";
        cin >> ch2;
        switch (ch2)
        {
        case 1:
            cout << "Enter an element: ";
            cin >> ele2;
            stack2.push(ele2);
            cout << "\n" << ele2 << " pushed into stack\n";
            break;
        case 2:
            stack2.display(stack2);
            break;
        case 3:
            cout << "\nExit\n";
            temp2 = 0;
            break;
        default:
            cout << "\nIncorrect input\n";
            break;
        }
    }

    if (isSameStack(stack1, stack2))
        cout << "Stacks are Same";
    else
        cout << "Stacks are not Same";

    return 0;
}
