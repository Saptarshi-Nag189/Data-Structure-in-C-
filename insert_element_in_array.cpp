#include <iostream>
using namespace std;

int main()
{
    int n, x, i, pos;
    int arr[n+1];
    cout << "Enter Array Size : ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << "\n";
        cin >> arr[i];
    }

    cout << "Array is : \n";
    for (i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter element to be inserted: ";
    cin >> x;
    cout << "Enter position ";
    cin >> pos;


    for (i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = x;
    cout << "New array is : \n";
    for (i = 0; i < n + 1; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
