#include <iostream>
using namespace std;
int s[20][3];
int main()
{
    cout << "Enter total no of rows:";
    cin >> s[0][0];
    cout << "Enter total no of columns:";
    cin >> s[0][1];
    cout << "Enter no of non zero elements:";
    cin >> s[0][2];
    printf("Enter sparse matrix details:\n");
    for (int i = 1; i <= s[0][2]; i++)
    {
        for (int j = 0; j < 3; j++)
            cin >> s[i][j];
    }
    cout << "Matrix in full form: " << endl;
    int m = s[0][0];
    int n = s[0][1];
    int x[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            x[i][j] = 0;
    }
    for (int i = 1; i <= s[0][2]; i++)
    {
        int r = s[i][0];
        int c = s[i][1];
        x[r][c] = s[i][2];
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cout << x[i][j] << " ";
        cout << endl;
    }
    return 0;
}