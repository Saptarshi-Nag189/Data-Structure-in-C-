#include <iostream>
#include <stack>

using namespace std;

// Push - Pop
class Stack
{
public:
	int stack[20];
	int top = -1;

	int isFull(int n)
	{
		if (top == n - 1)
			return 1;
		else
			return 0;
	}

	int isEmpty()
	{
		if (top == -1)
			return 1;
		else
			return 0;
	}

	void push(char n)
	{
		int ele;
		if (isFull(n))
			cout << endl
				 << "Stack is full !!!";
		else
		{
			cout << "What element would you want to insert ?";
			cin >> ele;
			top += 1;
			stack[top] = ele;
			cout << endl
				 << "Element Pushed..." << endl;
		}
		cout << endl;
	}

	int pop()
	{
		if (isEmpty())
		{
			cout << endl
				 << "Stack is empty !!!" << endl;
			return stack[top];
		}
		else
		{
			int e = stack[top];
			stack[top] = '\0';
			cout << "Topmost element Poped..." << endl;
			top -= 1;
			return e;
		}
	}

	void display(int n)
	{
		cout << endl
			 << "This is your stack:" << endl;
		for (int i = n - 1; i >= 0; --i)
		{
			cout << "Position = " << i << ", "
				 << "Element = " << stack[i];
			if (top == i)
				cout << "  <- Top = " << i;
			cout << endl;
		}
	}

	int stackTop()
	{
		return stack[top];
	}

	int stackSize()
	{
		stack<char> st;
		return st.size();
	}
};
