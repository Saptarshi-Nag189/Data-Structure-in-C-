#include <iostream>
using namespace std;

#define MAX 100

int data[MAX][3];

int len;



int main()
{
    int r, c;

    int a[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\nEnter element no " << i << "," << j << " for 1st matrix \n";
            cin >> a[i][j];
        }
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }

    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            if (a[i][j] > 0)
            {
                data[len][0] = r;

                data[len][1] = c;

                data[len][2] = val;

                len++;
            }

    cout << "\nDimension of Sparse Matrix: " << len << " x " << 3;
    cout << "\nSparse Matrix: \nRow Column Value\n";

    for (int i = 0; i < len; i++)
    {
        cout << data[i][0] << " "
             << data[i][1] << " "
             << data[i][2] << "\n";
    }
}

return 0;
}
