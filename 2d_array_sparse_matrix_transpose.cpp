#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the size of the matrix to sparse it:-";
    cin >> m >> n;
    int X[n][m];
    cout << "Enter the matrix:\n";
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> X[j][i];
    int S[m * n][3];
    S[0][0] = n;
    S[0][1] = m;
    S[0][2] = 0;
    int k = 1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (X[i][j] != 0)
            {
                S[0][2]++;
                S[k][0] = i;
                S[k][1] = j;
                S[k][2] = X[i][j];
                k++;
            }
    cout << "The transpose of a sparse matrix can be drawn as:-\n";
    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << S[i][j] << " ";
        cout << "\n";
    }
    return 0;
}

