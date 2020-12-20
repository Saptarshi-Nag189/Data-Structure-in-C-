#include <iostream>
#include <stack>
using namespace std;

int postfixEval(string str)
{
    stack<int> stack;

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            stack.push(str[i] - '0');

        else
        {
            int x = stack.top();
            stack.pop();

            int y = stack.top();
            stack.pop();

            if (str[i] == '+')
                stack.push(y + x);

            else if (str[i] == '-')
                stack.push(y - x);

            else if (str[i] == '*')
                stack.push(y * x);

            else if (str[i] == '/')
                stack.push(y / x);
        }
    }

    return stack.top();
}

int main()
{
    string exp;
    cout << "Enter expression: ";
    cin >> exp;

    cout << "Evaluated expression: ";
    cout << postfixEval(exp);

    return 0;
}