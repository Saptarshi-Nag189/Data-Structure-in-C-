#include <iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int n, d;
    int *a;
    cout << "Enter array size ";
    cin >> n;
    cout << "\nEnter the difference ";
    cin >> d;
    a=(int*)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i << "\n";
        cin >> a[i];
    }

    cout << "\nArray is\n\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";

    int flag = 0;
    for (int i = 0; i <= n ; i++)
    {
        int k = a[i];
        for (int j = i + 1; j <= n; j++)
        {
            if (abs(k - a[j]) == d)
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
    free(a);
    return 0;
    
    
}
