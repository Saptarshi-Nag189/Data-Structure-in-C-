#include <iostream>
using namespace std;
int sumOfDigit(int n)
{
    if (n==0)
        return 0;
    int s=0,r;
    r=n%10;
    n=n/10;
    return (s+r+sumOfDigit(n));
}

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;

    cout<<"sum of digits of "<<n<<" is "<<sumOfDigit(n);
    return 0;
}