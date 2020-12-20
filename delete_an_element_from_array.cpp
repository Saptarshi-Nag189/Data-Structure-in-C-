#include <iostream>
using namespace std;

int main()
{
    int n, i, x, count = 0;
    cout << "Enter array size : ";
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << "\n";
        cin >> arr[i];
    }

    cout << "Array is :\n";
    for (i = 0; i <n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nEnter element to be delete : ";
    cin >> x;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            for (int j = i; j < (n - 1); j++)
            {
                arr[j] = arr[j + 1];
            }
            count++;
            break;
        }
    }
    if (count == 0)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Now the new array is :\n";
        for (i = 0; i < (n - 1); i++)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}
