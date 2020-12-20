#include <iostream>
#include<string>
using namespace std;
int isPalindrome(string str, int l, int r)
{
    if(str[l]==str[r])
        return 1;
    if(str[l]!=str[r])
        return 0;
    if(str[l]<str[r])
        isPalindrome(str,l+1,r-1);
}
int main()
{
    string s;
    cout << "Enter string: ";
    getline(cin, s);

    int n = s.length();
    if(isPalindrome(s,0,n-1))
        cout<<"String is palindrome";
    else
        cout << "String is not palindrome";

    return 0;
}