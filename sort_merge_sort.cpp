#include <iostream>
using namespace std;

int count = 0;
int pass = 1;

void swapping(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void display(int *array, int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << " ";
    cout << endl;
}

void merge(int *array, int l, int m, int r)
{
    int i, j, k, nl, nr;

    //size of left and right sub-arrays
    nl = m - l + 1;
    nr = r - m;

    int larr[nl], rarr[nr];

    //fill left and right sub-arrays
    for (i = 0; i < nl; i++)
        larr[i] = array[l + i];
    for (j = 0; j < nr; j++)
        rarr[j] = array[m + 1 + j];
    i = 0;
    j = 0;
    k = l;

    //marge temp arrays to original array
    while (i < nl && j < nr && ++count)
    {
        if (larr[i] <= rarr[j])
        {
            array[k] = larr[i];
            i++;
        }

        else
        {
            array[k] = rarr[j];
            j++;
        }
        k++;
    }

    while (i < nl)
    {
        //extra element in left array
        array[k] = larr[i];
        i++;
        k++;
    }
    
    while (j < nr)
    {
        //extra element in right array
        array[k] = rarr[j];
        j++;
        k++;
    }
}

void mergeSort(int *array, int l, int r)
{
    int m;
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(array, l, m);
        mergeSort(array, m + 1, r);
        merge(array, l, m, r);

        cout << "\nPass " << pass<< " : ";
        for (int i = l; i <= r; i++)
            cout << array[i] << "  ";

        pass++;
    }
}

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEenter element no. " << i << "\n";
        cin >> arr[i];
    }

    cout << "\nArray before Sorting: ";
    display(arr, n);

    mergeSort(arr, 0, n - 1);
    cout << "\nArray after Sorting: ";
    display(arr, n);

    cout << "\nTotal number of comparisions are " << count << endl;
}