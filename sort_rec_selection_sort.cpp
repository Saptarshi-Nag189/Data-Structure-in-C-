#include <iostream>
using namespace std;

int count = 0;
void Swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

int minIndex(int a[], int i, int j)
{
    if (i == j)
        return i;

    int k = minIndex(a, i + 1, j);

    return (a[i] < a[k]) ? i : k;
}

void selectionSortRecursive(int a[], int n, int index = 0)
{
    if (index == n)
        return;

    int k = minIndex(a, index, n - 1);

    if (k != index)
        swap(a[k], a[index]);

    selectionSortRecursive(a, n, index + 1);
    count++;
}

int main()
{
    int n;
    cout << "Enter array size \n";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i + 1 << "\n";
        cin >> a[i];
    }

    cout << "\nUnsorted array is: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";

    selectionSortRecursive(a, n);
    cout << "\n\nSorted array is: ";
    printarray(a, n);
    cout << "\n\nNumber of comparisons : " << count;
    return 0;
}