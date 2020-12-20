#include <iostream>
#include <stack>
#include <string.h>
using namespace std;

int prec(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

string infixToPostfix(string infix)
{
    std::stack<char> st;
    st.push('\0');
    int l = infix.length();
    string postfix;
    for (int i = 0; i < l; i++)
    {
        if ((infix[i] >= 'a' && infix[i] <= 'z') || (infix[i] >= 'A' && infix[i] <= 'Z'))
            postfix += infix[i];

        else if (infix[i] == '(')

            st.push('(');

        else if (infix[i] == ')')
        {
            while (st.top() != '\0' && st.top() != '(')
            {
                char c = st.top();
                st.pop();
                postfix += c;
            }
            if (st.top() == '(')
            {
                char c = st.top();
                st.pop();
            }
        }

        else
        {
            while (st.top() != '\0' && prec(infix[i]) <= prec(st.top()))
            {
                char c = st.top();
                st.pop();
                postfix += c;
            }
            st.push(infix[i]);
        }
    }

    while (st.top() != '\0')
    {
        char c = st.top();
        st.pop();
        postfix += c;
    }

    return postfix;
}

string reverse(string &str)
{
    int n = str.length();

    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}
using namespace std;

bool isOperator(char c)
{
    return (!isalpha(c) && !isdigit(c));
}

string infixToPrefix(string infix)
{
    int l = infix.size();

    reverse(infix);

    for (int i = 0; i < l; i++)
    {

        if (infix[i] == '(')
        {
            infix[i] = ')';
            i++;
        }
        else if (infix[i] == ')')
        {
            infix[i] = '(';
            i++;
        }
    }

    string prefix;
    prefix = infixToPostfix(infix);

    reverse(prefix);

    return prefix;
}

int main()
{
    string exp;
    cout << "Enter expression: ";
    cin >> exp;
    cout << "Prefix expression: " << infixToPrefix(exp);
    return 0;
}
