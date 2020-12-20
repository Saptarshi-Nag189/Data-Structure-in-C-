#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int r;
    cout << "\nenter total number of rows: ";
    cin >> r;
    int *jagged[r];

    int *a;
    a = (int *)malloc(r * sizeof(int));
    for (int i = 0; i < r; i++)
    {
        cout<<"\nEnter array size: ";
        cin>>a[i];
        jagged[i] = (int *)malloc(a[i]* sizeof(int));
    }


    int k = 0, number;

    for (int i = 0; i < r; i++)
    {
        int *p = jagged[i];

        cout << "Give the numbers:\n";
        for (int j = 0; j < a[k]; j++)
        {
            cin >> number;
            *p = number++;
            p++;
        }
        k++;
    }

    k = 0;
    cout << endl;
    for (int i = 0; i < r; i++)
    {

        int *p = jagged[i];
        for (int j = 0; j < a[k]; j++)
        {

            cout << *p << "    ";
            p++;
        }
        cout << endl;
        k++;
        jagged[i]++;
    }
    return 0;
}