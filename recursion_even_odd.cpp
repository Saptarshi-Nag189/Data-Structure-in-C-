#include <iostream>
using namespace std;
void even(int n);

void odd(int n)
{
    if (n > 10)
        return;
    else
    {
        cout << n + 1<<"\t";
        n = n + 1;
        even(n);
    }
}

void even(int n)
{
    if (n > 10)
        return;
    else
    {
        cout << n - 1<<"\t";
        n = n + 1;
        odd(n);
    }
}

int main()
{
    int n=1;
    odd(n);

    return 0;
}



/**************************************
int main()
{
    int n=10;
    for(int i=1; i<=10; i++)
    {
        if(i%2==0)
            cout<<(i-1)<<"\t";
        else
            cout<<(i+1)<<"\t";
    }

    return 0;
}
*************************************/