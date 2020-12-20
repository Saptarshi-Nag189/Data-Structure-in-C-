#include <iostream>

using namespace std;

// Odd Even Stack
class Stack
{
	int stack[20];
	int top = -1;

public:
	Stack()
	{
		for (int i = 0; i < 20; ++i)
			stack[i] = '\0';
	}

	int count = 0;

	void Push(int ele)
	{
		top += 1;
		stack[top] = ele;
	}

	void Display(int n)
	{
		for (int i = 0; i < n; ++i)
		{
			cout << stack[i];
			cout << endl;
		}
	}
};

int main()
{
	int n, c1 = 0, c2 = 0;
	cout << "Give the size of the array: ";
	cin >> n;
	int a[n];
	Stack odd, even;

	cout << endl
		 << "Give the array elements:\n";
	for (int i = 0; i < n; ++i)
		cin >> a[i];

	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			even.Push(a[i]);
			c1++;
		}
		else
		{
			odd.Push(a[i]);
			c2++;
		}
	}

	cout << endl
		 << "odd stack:\n";
	if (c2 == 0)
		cout << "Nothing here\n";
	else
		odd.Display(c2);

	cout << endl
		 << "even stack:\n";
	if (c1 == 0)
		cout << "Nothing here";
	else
		even.Display(c1);
}
