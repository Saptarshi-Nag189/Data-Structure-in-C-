#include <iostream>
using namespace std;

int arrayMax(int arr[], int l, int r)
{
    int max;
    if (l >= (r-2))
    {
        if (arr[l] > arr[l + 1])
            return arr[l];
        else
            return arr[l+1];
    }
    max = arrayMax(arr, l + 1, r);
    if (arr[l]>max)
        return arr[l];
    else
        return max;
}

int arrayMin(int arr[], int l, int r)
{
    int min;
    if (l >= (r - 2))
    {
        if (arr[l] < arr[l + 1])
            return arr[l];
        else
            return arr[l + 1];
    }
    min = arrayMin(arr, l + 1, r);
    if (arr[l] < min)
        return arr[l];
    else
        return min;
}

int main()
{
    int n;
    cout << "Enter array size \n";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << "\n";
        cin >> a[i];
    }
    cout << "Highest array element: ";
    cout << arrayMax(a, 0, n);
    cout << "\nLowest array element: ";
    cout << arrayMin(a, 0, n);

    return 0;
}