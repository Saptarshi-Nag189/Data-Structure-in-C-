#include <iostream>
using namespace std;

//more function call

// int printArrayElements(int arr[], int l, int r)
// {
//     if (l <= r)
//         return (arr[l] + printArrayElements(arr, l + 1, r));
//     else
//         return 0;
// }


//less function call
int printArrayElements(int arr[], int l, int r)
{
    if (l == r)
        return (arr[l]);
    else if (l < r)
        return (arr[l] + arr[r] + printArrayElements(arr, l + 1, r - 1));
    else
        return 0;
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
    cout << "Sum of array elements: ";
    cout << printArrayElements(a, 0, n - 1);

    return 0;
}