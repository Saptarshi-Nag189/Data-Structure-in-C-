#include <iostream>
using namespace std;

void stringCopy(char str1[], char str2[], int i)
{
    str2[i] = str1[i];
    if(str1[i] == '\0')
        return;
    stringCopy(str1, str2, i + 1);
        
}
int main()
{
    char s1[20];
    char s2[20];
    cout << "Enter string: ";
    cin>>s1;
    stringCopy(s1, s2, 0);

    cout << "Copied string is: " << s2;

    return 0;
}