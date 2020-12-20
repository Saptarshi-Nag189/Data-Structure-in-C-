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
        cout << "\nEnter element: ";
        cin >> val;
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
        int a = -1;

        if (isEmpty())
            cout << "\nQueue is empty. No elements to delete from queue.\n";
        else
        {
            front++;
            a = q[front];
            cout << "\n\n";
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
            for (int i = front + 1; i <= rear; i++)
                cout << q[i] << "\t";
            cout << "\n\nRear is " << rear << "\n";
        }
    }

    int size()
    {
        return (rear + 1);
    }

    int queueRear()
    {
        return q[rear];
    }
};

bool isSameQueue(queue queue1, queue queue2)
{
    bool flag = true;

    while (queue1.isEmpty() == false)
    {
        if (queue1.size() != queue1.size())
        {
            flag = false;
            return flag;
        }

        if (queue1.queueRear() == queue2.queueRear())
        {
            queue1.deQueue();
            queue2.deQueue();
        }
        else
        {
            flag = false;
            break;
        }
    }

    return flag;
}

int main()
{
    queue queue1;
    queue queue2;

    int ch1, ch2, ele1, ele2, temp1 = 1, temp2 = 1;
    cout << "Enter elements of queue 1";
    cout << "\n Press 1 to Enter an element \n Press 2 to view queue \n Press 3 to exit";

    while (temp1)
    {
        cout << "\n Enter your choice: ";
        cin >> ch1;
        switch (ch1)
        {
        case 1:
            queue1.enQueue();
            break;
        case 2:
            queue1.displayQueue();
            break;
        case 3:
            cout << "\nExit.\n";
            temp1 = 0;
            break;
        default:
            cout << "\nIncorrect input\n";
        }
    }

    cout << "Enter elements of queue 2";
    cout << "\n Press 1 to Enter an element \n Press 2 to view queue \n Press 3 to exit";
    while (temp2)
    {
        cout << "\n Enter your choice: ";
        cin >> ch2;
        switch (ch2)
        {
        case 1:
            queue2.enQueue();
            break;
        case 2:
            queue2.displayQueue();
            break;
        case 3:
            cout << "\n Exit.\n";
            temp2 = 0;
            break;
        default:
            cout << "\n Incorrect input\n";
            break;
        }
    }

    if (isSameQueue(queue1, queue2))
        cout << "Both queue are Same";
    else
        cout << "Queues are not Same";

    return 0;
}
