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

void bubbleSortRecursive(int a[], int n)
{
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1])
            swap(a[i], a[i + 1]);

    bubbleSortRecursive(a, n - 1);
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
    printarray(a, n);

    bubbleSortRecursive(a, n);
    cout << "\n\nSorted array is: ";
    printarray(a, n);

    cout << "\n\nNumber of comparisons : " << count;

    return 0;
}