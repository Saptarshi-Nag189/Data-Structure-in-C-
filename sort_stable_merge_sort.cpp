#include <iostream>
using namespace std;
int pass = 1;
int count = 0;

class Array
{
public:
    int value;
    int index;
};

void stableMergeSort(Array a[], int left, int mid, int right)
{

    int i = left, j = mid + 1, k = left;
    Array arr[right + 1];

    while (i <= mid && j <= right && ++count)
    {
        if (a[i].value <= a[j].value)
        {
            arr[k].value = a[i].value;
            arr[k].index = a[i].index;
            k++;
            i++;
        }

        else
        {
            arr[k].value = a[j].value;
            arr[k].index = a[j].index;
            k++;
            j++;
        }
    }

    while (i <= mid)
    {
        arr[k].value = a[i].value;
        arr[k].index = a[i].index;
        k++;
        i++;
    }

    while (j <= right)
    {
        arr[k].value = a[j].value;
        arr[k].index = a[j].index;
        k++;
        j++;
    }

    for (int i = left; i <= right; i++)
    {
        a[i].value = arr[i].value;
        a[i].index = arr[i].index;
    }
}

void stableMergeSort(Array a[], int left, int right)
{
    if (left >= right)
        return;

    int mid = (left + right) / 2;
    stableMergeSort(a, left, mid);
    stableMergeSort(a, mid + 1, right);
    stableMergeSort(a, left, mid, right);

    cout << "Pass " << pass << endl;

    cout << "index -> ";
    for (int i = left; i <= right; i++)
        cout << a[i].index << "\t";
    cout << endl;

    cout << "value -> ";
    for (int i = left; i <= right; i++)
        cout << a[i].value << "\t";

    cout << "\n\n";
    pass++;
}

int main()
{
    int n;
    cout << "Enter the total number of elements\n";
    cin >> n;

    Array a[n];
    cout << "Enter the elements of the array\n";
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << " ";
        a[i].index = i;
        cin >> a[i].value;
    }

    cout << "Array before sorting\n";
    cout << "index -> ";
    for (int i = 0; i < n; i++)
        cout << a[i].index << "\t";
    cout << "\n";

    cout << "value -> ";
    for (int i = 0; i < n; i++)
        cout << a[i].value << "\t";
    cout << "\n";

    stableMergeSort(a, 0, n - 1);

    cout << "The sorted array is\n";
    cout << "index -> ";
    for (int i = 0; i < n; i++)
        cout << a[i].index << "\t";
    cout << "\n";

    cout << "value -> ";
    for (int i = 0; i < n; i++)
        cout << a[i].value << "\t";
    cout << "\n";

    cout << "Total number of comparisions are " << count << endl;
    return 0;
}