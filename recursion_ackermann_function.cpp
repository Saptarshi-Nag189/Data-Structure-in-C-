#include <iostream>
using namespace std;

int ackermann(int m, int n)
{
    if (m == 0 && n > 0)
        return (n + 1);
    if (n == 0 && m > 0)
        return ackermann(m - 1, 1);
    else
        return ackermann(m - 1, ackermann(m, n - 1));
}
int main()
{
    int m, n;
    cout << "Enter the value for \'m\': ";
    cin >> m;
    cout << "Enter the value for \'n\': ";
    cin >> n;

    cout << "A( " << m << ", " << n << " ) = " << ackermann(m,n);

    return 0;
}