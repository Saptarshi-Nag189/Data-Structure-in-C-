#include <iostream>

using namespace std;

int main()
{
    int m, n;
    cout << "Enter number of rows \n";
    cin >> m;
    cout << "Enter number of columns \n";
    cin >> n;
    int a[m][n];

    if (m != n)
    {
        cout << "Row and col must be similar";
        exit(0);
    }

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

    cout << "\n Lower Matrix is\n\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i >= j)
            {
                cout << a[i][j] << "\t";
            }

            else
            {
                cout << "0"
                     << "\t";
            }
        }
        cout << "\n";
    }

    return 0;
}