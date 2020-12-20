#include <iostream>
using namespace std;

int relativePrime(int x, int y)
{
    if (x == 1 || y == 1)
        return 1;
    else if (x != 1 && y != 1 && x == y)
        return 0;
    else if (x != 1 && y != 1 && x < y)
        return relativePrime(x, y - x);
    else if (x != 1 && y != 1 && x > y)
        return relativePrime(x - y, y);
}

int main()
{
    int m, n;
    cout << "Enter the value for 1st number: ";
    cin >> m;
    cout << "Enter the value for 2nd number: ";
    cin >> n;

    if ((relativePrime(m, n)) == 1)
        cout << m << " and " << n << " are relative prime";
    else
        cout << m << " and " << n << " are not relative prime";

    return 0;
}