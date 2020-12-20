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

void countSort(int a[], int n, int pow10)
{
    if (n <= 1)
    {
        cout << "Not enough element to sort";
        printarray(a, n);
    }

    else
    {
        int count[10], digit, index, i;
        int output[n];

        for (i = 0; i < 10; i++)
            count[i] = 0;

        for (i = 0; i < n; i++)
        {
            digit = (a[i] / pow10) % 10;
            count[digit] += 1;
        }

        for (i = 1; i < 10; i++)
            count[i] = count[i] + count[i - 1];

        for (i = n - 1; i >= 0; i--)
        {
            digit = (a[i] / pow10) % 10;
            index = count[digit] - 1;
            count[digit] = count[digit] - 1;
            output[index] = a[i];
        }

        for (int i = 0; i < n; i++)
            a[i] = output[i];
    }
}

void radixSort(int a[], int n)
{
    int max = getMax(a, n);
    int pow10 = 1;
    int i=1;
    while (max > 0)
    {
        countSort(a, n, pow10);
        pow10 = pow10 * 10;
        max = max / 10;
        cout << "\n----------------------------------------------------------------";
        cout << "\n\nSubpass " << i << ":  ";
        printarray(a, n);
        i++;
    }
    cout<<"<- This is the sorted array";
    cout << "\n----------------------------------------------------------------";
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

    radixSort(a, n);

    return 0;
}