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

void selectionSort(int a[], int n)
{
    int count = 0;
    int min_indx;
    for (int i = 0; i <= n - 2; i++)
    {
        min_indx = i;
        for (int j = i + 1; j <= n - 1; j++)
        {
            if (a[j] < a[min_indx])
                min_indx = j;
            count++;
        }
        Swap(&a[min_indx], &a[i]);
        cout << "\n\nPass = " << i + 1<<"\t";
        printarray(a,n);
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
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";

    selectionSort(a, n);

    //Selection sort using iteration
    // int min_indx;
    // for (int i = 0; i <= n - 2; i++)
    // {
    //     min_indx = i;
    //     for (int j = i + 1; j <= n - 1; j++)
    //     {
    //         if (a[j] < a[min_indx])
    //             min_indx = j;
    //     }
    //     Swap(&a[min_indx], &a[i]);
    // }

    return 0;
}