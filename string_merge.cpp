#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

char *Concatenate(char *str1, char *str2)
{
    int s1 = strlen(str1);
    int s2 = strlen(str2);
    int total = (s1 + 1) + s2;
    int i, j = 0;
    str1 = (char *)realloc(str1, ((s1 + 1) + s2) * sizeof(char));
    for (int i = s1; i < total; i++)
    {
        str1[i] = str2[j];
        j++;
    }
    str1[i] = '\0';
    return str1;
}
int main(void)
{
    char *str1, *str2;
    int n1, n2;
    cout << "Enter lengths of string1 and string2: ";
    cin >> n1 >> n2;

    printf("Enter the string 1:\n");
    str1 = (char *)malloc(n1*sizeof(char));

    scanf(" %[^\n]%*c", str1);
    cout << "\nEnter the string 2:";

    str2 = (char *)malloc(n2*sizeof(char));
    scanf(" %[^\n]%*c", str2);

    str1 = Concatenate(str1, str2);
    cout << "\nConcatenated String:";
    cout << str1;

    free(str1);
    free(str2);

    return 0;
}