#include <iostream>

using namespace std;

int main()
{
    int n, s;
    cout << "Enter array size ";
    cin >> n;
    cout << "\nEnter the sum ";
    cin >> s;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << "\n";
        cin >> a[i];
    }

    cout << "\nArray is\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }

    int flag = 0;
    for (int i = 0; i <= n / 2; i++)
    {
        int k = a[i];
        for (int j = i + 1; j < n; j++)
        {
            if (k + a[j] == s)
            {
                cout << "\n\nPair found " << k << "\t" << a[j];
                flag++;
            }
        }
    }
    if (flag == 0)
        cout << "\n\nNo pair found";
    else
        cout << "\nTotal number of pair is: " << flag;
    return 0;
}
