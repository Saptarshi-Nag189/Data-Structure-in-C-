#include <iostream>
using namespace std;
int binarySearch(int arr[], int l, int r, int x)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] < x)
            l = mid + 1;
        else
            r = mid - 1;
    }
    return -1;
}

int binarySearchRec(int arr[], int l, int r, int x)
{
    if (l <= r)
    {
        int mid = (l + r) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearchRec(arr, l, mid - 1, x);
        else
            return binarySearchRec(arr, mid + 1, r, x);
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

    int size = sizeof(a) / sizeof(a[0]);

    cout << "\nEnter the number you want to find: ";
    cin >> x;
    cout << "\n 1. Binary search using iteration \n 2. Binary search using recursion\n";
    int ch;
    cin>>ch;
    if(ch==1)
    {
        int index = binarySearch(a, 0, size - 1, x);
        if (index == -1)
            cout << "\nElement not found";
        else
            cout << "Element found at index " << index;
    }

    else
    {
        int index = binarySearchRec(a, 0, size - 1, x);
        if (index == -1)
            cout << "\nElement not found";
        else
            cout << "Element found at index " << index;
    }
    
    return 0;
}