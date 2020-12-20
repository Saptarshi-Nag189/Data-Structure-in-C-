#include <iostream>
using namespace std;

int printArrayElements(int arr[],int l, int r)
{
    if(l<=r)
    {
        cout<<arr[l]<<"\t";
        return printArrayElements(arr, l + 1, r);
    }
    return -1;
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
    cout<<"Array elements: ";
    printArrayElements(a,0,n-1);
    
    return 0;
}