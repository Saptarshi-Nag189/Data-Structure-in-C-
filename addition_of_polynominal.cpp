#include <iostream>

using namespace std;

int main()
{
    int n1, n2, n;
    cout << "Enter highest order of 1st polynominal: \n";
    cin >> n1;
    cout << "\nEnter highest order of 2nd polynominal: \n";
    cin >> n2;

    if (n1 >= n2)
    {
        n = n1 + 1;
    }
    else
    {
        n = n2 + 1;
    }

    int a[n] = {0}, b[n] = {0}, s[n];

    for (int i = 0; i < n1 + 1; i++)
    {
        cout << "\nEnter coefficient of: " << i << "th order element for 1st polynoinal: "<< "\n";
        cin >> a[i];
    }

    cout << "\n1st polynominal: ";
    for (int i = 0; i < n1 + 1; i++)
    {
        cout << a[i] << "x^" << i <<"\t";
    }

    for (int i = 0; i < n2 + 1; i++)
    {
        cout << "\nEnter coefficient of: " << i << "th order element is for 1st polynoinal: "
             << "\n";
        cin >> b[i];
    }

    cout << "\n2nd polynominal: ";
    for (int i = 0; i < n2 + 1; i++)
    {
        cout << b[i] << "x^" << i << "\t ";
    }

    cout << "\n\nSum of polynominals is:\n";
    for (int i = 0; i < n; i++)
    {
        s[i] = a[i] + b[i];
        cout << s[i] << "x^" << i <<"\t ";
    }

    return 0;
}
