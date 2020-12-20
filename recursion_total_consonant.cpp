#include <iostream>
#include <string>
using namespace std;
char toLower(char ch)
{
    if (ch >= 65 && ch <= 90)
        return (ch + 32);
    else
        return ch;
}

int isConstant(char c)
{
    char ch = toLower(c);
    if (!(ch == 'a' || ch == 'e' || ch == 'e' || ch == 'o' || ch == 'u') && (ch >= 97 && ch <= 122))
        return 1;
    else
        return 0;
}
int findConsonant(string s, int n)
{
    if (n == 1)
        return isConstant(s[0]);
    else
        return (findConsonant(s, n - 1) + isConstant(s[n - 1]));
}

int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int n = s.length();
    cout << "Number of consonants is " << findConsonant(s, n);
    return 0;
}