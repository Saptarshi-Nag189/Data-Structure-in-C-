#include <iostream>
using namespace std;
int rev(int num)
{
    static int reverse = 0;
    if (num > 0)
    {
        reverse = (reverse * 10) + (num % 10);
        num = num / 10;
        rev(num);
    }
    return reverse;
}

void palindrome(int n)
{
    if (n==rev(n))
        cout<<n<<" is plaindrome";
    else
        cout << n << " is not plaindrome";
}
int main()
{
    int n;
    cout << "Enter a number ";
    cin >> n;
    palindrome(n);

    return 0;
}