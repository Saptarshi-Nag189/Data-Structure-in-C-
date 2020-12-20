#include <iostream>
#include <stack>
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