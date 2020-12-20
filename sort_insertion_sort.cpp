#include <iostream>
using namespace std;

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

void insertionSort(int a[], int n)
{
    int count = 0;
    if (n <= 1)
        cout << "Not enough element to sort";
    else
    {
        int key, j;
        for (int i = 1; i < n; i++)
        {
            key = a[i];
            j = i;
            while (j > 0 && a[j - 1] > key)
            {
                a[j] = a[j - 1];
                j--;
            }
            count++;
            a[j] = key;

            cout << "\n\nPass = " << i << "\t";
            printarray(a, n);
            cout << "\n______________________________________________________________________________________________";
        }
        cout << "\nNumber of comparisons : " << count;
    }
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

    insertionSort(a, n);

    return 0;
}