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

    if (m1 != m2 || n1 != n2)
    {
        cout << "Row and col must be similar";
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

    cout << "\n1st Matrix is\n\n";
    for (int i = 0; i < m1; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout << a[i][j] << "\t";
        }
        cout << "\n";
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

    cout << "Concatinated matrix is \n\n";
    for (int i = 0; i < m2; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            cout << a[i][j] << "\t";
        }
        for (int k = 0; k < n1; k++)
        {
            cout << b[i][k] << "\t";
        }
        cout << "\n";
    }
    return 0;
}