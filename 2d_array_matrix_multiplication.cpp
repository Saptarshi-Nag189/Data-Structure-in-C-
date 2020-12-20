#include <iostream>

using namespace std;

int main()
{
    int m1, n1, m2, n2;
    cout << "Enter number of rows for 1st matrix \n";
    cin >> m1;
    cout << "Enter number of columns for 1st matrix \n";
    cin >> n1;

    cout << "Enter number of rows for 2nd matrix \n";
    cin >> m2;
    cout << "Enter number of columns for 2nd matrix \n";
    cin >> n2;

    if (n1 != m2)
    {
        cout << "Col of 1st matrix and row of 2nd matrix must be similar";
        exit(0);
    }

    int a[m1][n1];
    int b[m2][n2];

    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << "\nEnter element no " << i << "," << j << " for 1st matrix \n";
            cin >> a[i][j];
        }
    }

    cout << "\n1st Matrix is\n\n";
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << "\nEnter element no " << i << "," << j << " for 2nd matrix \n";
            cin >> b[i][j];
        }
    }

    cout << "\n2nd Matrix is\n\n";
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << b[i][j] << "\t";
        }
        cout << "\n";
    }

    int c[m1][n2];

    cout << "\nProduct Matrix is\n\n";
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            c[i][j]=0;
            for (int k = 0; k < m2; k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
            
            cout << c[i][j] << "\t";
        }
        cout << "\n";
    }

    return 0;
}