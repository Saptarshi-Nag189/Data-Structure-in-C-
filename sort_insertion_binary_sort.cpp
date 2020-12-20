#include <iostream>
using namespace std;

int count = 0,pass = 1;

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "  ";
}
int binarySearch(int a[], int low, int high, int item)
{
    count++;
    if (low >= high)
    {
        if (a[low] < item)
            return low + 1;
        else
            return low;
    }
    int mid = (low + high) / 2;
    if (a[mid] == item)
        return mid;
    else if (a[mid] > item)
        return binarySearch(a, low, mid - 1, item);
    else
        return binarySearch(a, mid + 1, high, item);
}

void insertionSort(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pos = binarySearch(a, 0, i, a[i]);
        int temp = a[i];
        for (int j = i; j > pos; j--)
            a[j] = a[j - 1];

        a[pos] = temp;
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
    cout << "\nsorted array is: ";
    printarray(a, n);

    cout <<"\nNumber of comparison : "<< count;

    return 0;
}