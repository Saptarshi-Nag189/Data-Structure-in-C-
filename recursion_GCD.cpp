#include <iostream>
using namespace std;
int gcd(int n1, int n2)
{
    if(n2>0)
        return gcd(n2,n1%n2);
    else
        return n1;
}

int main()
{
    int n1, n2;
    cout << "Enter 1st number ";
    cin >> n1;
    cout << "Enter 2nd number ";
    cin >> n2;

    cout<<"GCD of "<<n1<<" and "<<n2<< " is "<<gcd(n1,n2);

    return 0;
}