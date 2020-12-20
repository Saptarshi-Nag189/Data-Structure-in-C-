#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows \n";
    cin >> m;
    cout << "Enter number of columns \n";
    cin >> n;
    int a[m][n], transpose[n][m];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "\nEnter element no. " << i << "," << j << "\n";
            cin >> a[i][j];
        }
    }

    cout << "\nMatrix is\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "The transpose of the matrix is: \n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; ++j)
            cout << transpose[i][j] << "\t";
        cout << "\n";
    }

    return 0;
}