#include <iostream>
using namespace std;

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "  ";
}

int getMax(int a[], int n)
{
    int t = a[0];
    for (int i = 0; i < n; i++)
        if (t <= a[i])
            t = a[i];
    return t;
}

void countSort(int a[], int n)
{
    int count = 0;
    if (n <= 1)
    {
        cout << "Not enough element to sort";
        printarray(a, n);
    }

    else
    {
        int max = getMax(a, n);
        int output[n];
        int count[max + 1];
        int i, pass = 0;
        for (i = 0; i <= max; i++)
            count[i] = 0;

        cout << "\nInitial Count Array :\n";
        printarray(count, max + 1);
        cout << "\n----------------------------------------------------------------";

        for (i = 0; i < n; i++)
        {
            count[a[i]] = count[a[i]] + 1;
            cout << "\nPass " << i+1 << " Count Array after counting occurence:\n";
            printarray(count, max + 1);
        }
        
        cout << "\n----------------------------------------------------------------";

        for (i = 1; i <= max; i++)
            count[i] = count[i] + count[i - 1];

        cout << "\ncount array after counting relative index:\n";
        printarray(count, max + 1);
        cout << "\n----------------------------------------------------------------";

        for (int i = n - 1; i >= 0; i--)
        {
            int index = count[a[i]] - 1;
            count[a[i]] = count[a[i]] - 1;
            output[index] = a[i];
        }

        for (int i = 0; i < n; i++)
            a[i] = output[i];

        cout << "\nSorted array : ";
        printarray(a, n);
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

    countSort(a, n);

    return 0;
}