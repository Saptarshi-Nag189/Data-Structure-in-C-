#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 2)
        return (n - 1);
    else
        return (fib(n - 1) + fib(n - 2));
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout << "\nFibonacci is " << fib(n);
    return 0;
}

// num     1   2   3   4   5   6   7   8   9   10  11  12
// fib     0   1   1   2   3   5   8   13  21  34  55  89    