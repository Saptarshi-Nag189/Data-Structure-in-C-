#include <iostream>
#include <string>
using namespace std;

int isUpper(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        return 1;
    else
        return 0;
}

char firstUppercase(string str, int n)
{
    if (str[n] == '\0')
        return 0;
    else if (isUpper(str[n]))
        return str[n];
    else
        return firstUppercase(str, n + 1);
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    cout << "1st of uppercase is " << firstUppercase(s, 0);
    return 0;
}