#include <iostream>

using namespace std;


void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void mergeArray(int a1[], int n1, int a2[], int n2)
{
    int n = n1 + n2,temp;
    int a[n];

    for (int i = 0; i < n1; i++)
        a[i] = a1[i];

    for (int i = n1, j = 0; i < n2, j < n2; i++, j++)
        a[i] = a2[j];

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    display(a, n);
}

int main()
{
    int n1, n2;
    cout << "Enter size of 1st array";
    cin >> n1;
    int a1[n1];

    for (int i = 0; i < n1; i++)
    {
        cout << "\nfor 1st array enter element no. " << i << "\n";
        cin >> a1[i];
    }

    cout << "Enter size of 2nd array";
    cin >> n2;
    int a2[n2];

    for (int i = 0; i < n2; i++)
    {
        cout << "\nfor 2nd array enter element no. " << i << "\n";
        cin >> a2[i];
    }

    cout << "\n\n1st Array is\n";
    display(a1, n1);

    cout << "\n\n2nd Array is\n";
    display(a2, n2);

    // n = n1 + n2;
    // int a[n];

    // for (int i = 0; i < n1; i++)
    //     a[i] = a1[i];

    // for (int i = n1, j = 0; i < n2, j < n2; i++, j++)
    //     a[i] = a2[j];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (a[i] > a[j])
    //         {
    //             temp = a[i];
    //             a[i] = a[j];
    //             a[j] = temp;
    //         }
    //     }
    // }

    cout << "\n\nSorted Merged Array is\n";
    mergeArray(a1, n1, a2, n2);

    return 0;
}