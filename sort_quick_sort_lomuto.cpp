#include <iostream>
using namespace std;

int pass = 1;
int count = 0;

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << "  ";

    cout << "\n";
}

int sort(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            cout << "\nSwapping: " << arr[i] << " and " << arr[j];
            Swap(arr[i], arr[j]);
        }
        ++count;
    }
    cout << "\nSwapping: " << arr[i + 1] << " and " << arr[high];
    Swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high, int size)
{
    if (low < high)

    {
        int p = sort(arr, low, high);
        cout << "\nPass: " << pass << "\n";
        printArray(arr, size);
        pass++;
        quickSort(arr, low, p - 1, size);
        quickSort(arr, p + 1, high, size);
    }
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i + 1 << "\n";
        cin >> arr[i];
    }
    cout << "Unsorted array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1, n);
    cout << "--------------------------------------------\nSorted array is :";
    printArray(arr, n);
    cout << "\nTotal no. of pass: " << pass;
    cout << "\nTotal No. of comparison: " << count;

    return 0;
}