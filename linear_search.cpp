#include <iostream>
using namespace std;

int linSearch(int arr[],int l, int r, int x)
{
    if (r < l)
        return -1;
    if(arr[l]==x)
        return l;
    if(arr[r]==x)
        return r;
    return linSearch(arr,l+1,r-1,x);
}
int main()
{
    int n, x;
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
    int index = linSearch(a,0,size-1,x);
    if (index==-1)
        cout<<"\nElement not found";
    else
        cout <<"\nElement found in index "<<index;

    return 0;
}