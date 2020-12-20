#include <iostream>
#include "stack_class.cpp"

using namespace std;

int main()
{
    class Stack s;
    int arr[]={1,2,3,4,5};
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        arr[i] = s.pop();
    }

    return 0;
}