#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int r, c, i, j, count;
    cout << "\nEnter number of rows and columns: ";
    cin >> r >> c;

    int *a, *transpose;
    a = (int *)malloc(r * c * sizeof(int));
    transpose = (int *)malloc(c * r * sizeof(int));

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "\nEnter element no. " << i << "," << j << "\n";
            cin >> *(a + i * c + j);
        }
    }

    cout << "\nMatrix is:\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            cout << *(a + i * c + j) << "\t";

        cout << "\n";
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
            *(transpose + j * r + i) = *(a + i * c + j);
    }

    cout << "\nThe transpose of the matrix is: \n";
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; ++j)
            cout << *(transpose + i * r + j) << "\t";
        cout << "\n";
    }

    free(a);
    free(transpose);

    return 0;
}