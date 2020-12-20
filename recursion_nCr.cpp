#include <iostream>
using namespace std;

int nCr(int n, int r)
{
    if (n <= r || r == 0)
        return 1;
    else
        return (nCr(n - 1, r - 1) + nCr(n - 1, r));
}

int main()
{
    int n, r;
    cout << "Enter the value for \'n\': ";
    cin >> n;
    cout << "Enter the value for \'r\': ";
    cin >> r;

    cout << n << "C" << r << " = " << nCr(n, r);
    return 0;
}