#include <iostream>
using namespace std;

int rev(int num)
{
    static int reverse = 0;
    if (num>0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
        rev(num);
    }
    return reverse;
}

int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    cout << "Reverse of " << n << " is "<<rev(n);

    return 0;
}