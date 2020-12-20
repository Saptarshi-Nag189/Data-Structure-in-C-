#include <iostream>
using namespace std;

int ternarySearch(int arr[], int l, int r, int x)
{
    if (l <= r)
    {
        int mid1 = l + ((r - l) / 3);
        int mid2 = r - ((r - l) / 3);
        if (arr[mid1] == x)
            return mid1;
        if (arr[mid2] == x)
            return mid2;
        if (x < arr[mid1])
            return ternarySearch(arr, l, mid1 - 1, x);
        else if (x > arr[mid2])
            return ternarySearch(arr, mid1 + 1, r, x);
        else
            return ternarySearch(arr, mid1 + 1, mid2 - 1, x);
    }
    return -1;
}
int main()
{
    int x, n;
    cout << "Enter array size \n";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << "\n";
        cin >> a[i];
    }

    cout << "\nEnter the number you want to find: ";
    cin >> x;
    
    int index = ternarySearch(a, 0, n - 1, x);
        if (index == -1)
            cout << "\nElement not found";
        else
            cout << "Element found at index " << index;

    return 0;
}