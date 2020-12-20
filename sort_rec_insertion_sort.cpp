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

void insertionSortRecursive(int a[], int n)
{
    if (n <= 1)
        return;

    insertionSortRecursive(a, n - 1);

    int last = a[n - 1];
    int j = n - 2;

    while (j >= 0 && a[j] > last)
    {
        a[j + 1] = a[j];
        j--;
    }
    count++;
    a[j + 1] = last;
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

    insertionSortRecursive(a, n);
    cout << "\n\nSorted array is: ";
    printarray(a, n);
    cout << "\n\nNumber of comparisons : " << count;

    return 0;
}