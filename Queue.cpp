#include <iostream>
using namespace std;

#define max 5

class queue
{
private:
    int q[max], rear, front;

public:
    queue()
    {
        rear = front = -1;
    }
    int isFull()
    {
        if (rear == max - 1)
            return 1;
        else
            return 0;
    }

    int isEmpty()
    {
        if (rear == front)
            return 1;
        else
            return 0;
    }

    void enQueue()
    {
        int val;
        cout<<"\nEnter element: ";
        cin>>val;
        if (isFull())
            cout << "\nQueue is full. Nothing can be inserted\n";
        else
        {
            rear++;
            q[rear] = val;
            cout << "\nInserted " << val << " in queue\n";
        }
    }

    int deQueue()
    {
        int a=-1 ;

        if (isEmpty())
            cout << "\nQueue is empty. No elements to delete from queue.\n";
        else
        {
            front++;
            a = q[front];
            cout << "\nDeleted " << a << " from queue\n";
        }
        return a;
    }

    void displayQueue()
    {
        if (isEmpty())
            cout << "\nQueue is empty. Nothing to display\n";
        else
        {
            cout << "\nFront is " << front << "\n";
            cout << "\nQueue elements:\n";
            for (int i = front+1; i <= rear; i++)
                cout << q[i] << "\t";
            cout << "\n\nRear is " << rear << "\n";
        }
    }
};

int main()
{
    queue q;
    int ch;
    cout << "\n Press 1 to Enter an element\nPress 2 to delete first element\nPress 3 to display\nPress 4 to exit\nEnter your choice.";
    cin >> ch;

    do
    {
        cin >> ch;
        switch (ch)
        {
        case 1:
            q.enQueue();
            break;

        case 2:
            q.deQueue();
            break;

        case 3:
            q.displayQueue();
            break;

        case 4:
            cout << "\nExit\n";
            break;
        default:
            cout << "\nIncorrect input\n";
        }
    } while (ch != 4);
    return 0;
}