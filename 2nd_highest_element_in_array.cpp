#include <iostream>

using namespace std;

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

    int t1 = a[0];
    int t2=a[0];
    for (int i = 0; i < n; i++)
    {
        if (t1 <= a[i])
        {
            t2=t1;
            t1 = a[i];
        }
    }
    cout << "2nd Highest number is " << t2 << "\n";
    return 0;
}