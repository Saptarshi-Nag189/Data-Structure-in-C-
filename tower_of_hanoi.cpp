#include <iostream>
using namespace std;

int count=0;
void towerOfHanoi(int n, char a,
                  char c, char b)
{
    if (n == 1)
    {
        cout << "Move disk 1 from rod " << a << " to rod " << c << endl;
        count++;
    }
    else
    {
        towerOfHanoi(n - 1, a, b, c);
        cout << "Move disk " << n << " from rod " << a << " to rod " << c << endl;
        towerOfHanoi(n - 1, b, c, a);
        count++;
    }
}

int main()
{
    int n;
    cout << "\nEnter number of disks: ";
    cin >> n;
    towerOfHanoi(n, 'S', 'D', 'A');

    cout << "\n Number of steps = " << count;
    return 0;
}