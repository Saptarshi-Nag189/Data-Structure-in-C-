#include <iostream>
using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void printarray(int a[], int n)
{
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

void bubbleSort(int a[], int n)
{
    int count = 0;
    for (int i = 0; i <= n - 2; i++)
    {
        int k = 0;
        int flag = 0;
        cout << "\n\nPass = " << i + 1 << "\t";
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                Swap(&a[j], &a[j + 1]);
                flag++;
            }
            count++;
            cout << "\n\nSubpass = " << k + 1 << "\t";
            printarray(a, n);
            k++;
        }
        cout << "\n______________________________________________________________________________________________";

        if (flag == 0)
            break;
    }
    cout << "\nNumber of comparisons: " << count;
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
    cout << "\n______________________________________________________________________________________________";

    //Bubble Sort
    // for(int i=0; i<=n-2;i++)
    // {
    //     for(int j=0; j<=n-2-i;j++)
    //     {
    //         if(a[j]>a[j+1])
    //             Swap(&a[j],&a[j+1]);
    //     }
    // }

    bubbleSort(a, n);

    return 0;
}