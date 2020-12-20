#include <iostream>
using namespace std;

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

void stableSelectionSort(int a[], int n)
{
    int i, j, minindex, count = 0;
    for (i = 0; i <= n - 2; i++)
    {
        minindex = i;
        for (j = i + 1; j <= n - 1; j++)
        {
            if (a[j] < a[minindex])
                minindex = j;
            count++;
        }
        int key = a[minindex];
        while (minindex > i)
        {
            a[minindex] = a[minindex - 1];
            minindex = minindex - 1;
        }
        a[i] = key;
        cout << "\n\nPass = " << i + 1 << "\t";
        printarray(a, n);
        cout << "\n______________________________________________________________________________________________";
    }
    cout << "\nNumber of comparison: " << count;
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

    cout << "Unsorted array is: ";
    printarray(a, n);

    stableSelectionSort(a, n);
    cout << "\nSorted array is: ";
    printarray(a, n);

    return 0;
}