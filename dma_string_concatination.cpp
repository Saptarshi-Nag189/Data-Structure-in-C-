#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char *str1, *str2, *str3;
    int n1, n2;
    cout << "Enter lengths of string1 and string2: ";
    cin >> n1 >> n2;

    str1 = (char *)malloc(n1 * sizeof(char));
    str2 = (char *)malloc(n2 * sizeof(char));
    str3 = (char *)malloc((n1 + n2) * sizeof(char));

    cout << "Enter string 1: ";
    scanf(" %[^\n]s", str1);
    // cin >> str1;

    cout << "\nEnter string 2: ";
    scanf(" %[^\n]s", str2);
    // cin >> str2;
    
    int i = 0, j = 0;
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }

    i = 0;
    while (str2[i] != '\0')
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';

    cout << "\nConcatinated string is: " << str3;

    free(str1);
    free(str2);
    free(str3);

    return 0;
}