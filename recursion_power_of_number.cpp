#include <iostream>
using namespace std;

long long power(int n, int x)
{
    if (n == 0 || n == 1 || x == 1)
        return n;
    else if (x == 0)
        return 0;
    else
        return (n * power(n, x - 1));
}

int main()
{
    int n, x;
    cout << "Enter a number";
    cin >> n;
    cout << "Enter the power";
    cin >> x;

    cout << n << "^" << x << " = " << power(n, x);
    return 0;
}