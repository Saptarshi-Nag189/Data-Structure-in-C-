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

    void enqueueFront()
    {
        int x;
        cout << "Enter the value: ";
        cin >> x;
        if ((front == 0 && rear == max - 1) || (front == rear + 1))
            cout << "Queue is full" << endl;
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            q[front] = x;
            cout << "\n"
                 << x << " inserted in front\n";
        }
        else if (front == 0)
        {
            front = max - 1;
            q[front] = x;
            cout << "\n"
                 << x << " inserted in front\n";
        }
        else
        {
            front--;
            q[front] = x;
            cout << "\n"
                 << x << " inserted in front\n";
        }
    }

    void enqueueRear()
    {
        int x;
        cout << "Enter the value: ";
        cin >> x;
        if ((front == 0 && rear == max - 1) || (front == rear + 1))
            cout << "Queue is full" << endl;
        else if (front == -1 && rear == -1)
        {
            front = rear = 0;
            q[rear] = x;
            cout << "\n"
                 << x << " inserted in rear\n";
        }
        else if (rear == max - 1)
        {
            rear = 0;
            q[rear] = x;
            cout << "\n"
                 << x << " inserted in rear\n";
        }
        else
        {
            rear++;
            q[rear] = x;
            cout << "\n"
                 << x << " inserted in rear\n";
        }
    }

    void deQueue()
    {
        if (front == -1 && rear == -1)
            cout << "Queue is Empty" << endl;
        else if (front == rear)
            front = rear = -1;
        else
        {
            cout << q[front] << " deleted from queue" << endl;
            front = (front + 1) % max;
        }
    }

    void displayQueue()
    {
        if (isEmpty())
            cout << "\nQueue is empty. Nothing to display\n";
        int i = front;
        cout<<"Queue elements: ";
        while (i != rear)
        {
            cout << q[i] << " ";
            i = (i + 1) % max;
        }
        cout << q[rear] << endl;
    }

    int size()
    {
        return (rear + 1);
    }

    int queueRear()
    {
        return q[rear];
    }
    void queueFront()
    {
        cout << q[front] << endl;
    }
};

int main()
{
    queue queue1;
    int choice, temp = 1;
    cout << "Queue Main Menu : " << endl;
    cout << "\n1.Insert in rear \n2.Insert in front \n3.Remove \n4.Display \n5.Exit" << endl;
    while (temp)
    {
        cout << "Enter the choice : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            queue1.enqueueRear();
            break;
        case 2:
            queue1.enqueueFront();
            break;
        case 3:
            queue1.deQueue();
            break;
        case 4:
            queue1.displayQueue();
            break;
        case 5:
            temp = 0;
            cout << "Exit" << endl;
            break;
        default:
            cout << "\nIncorrect input\n";
            cout << "\n1.Insert in rear \n2.Insert in front \n3.Remove \n4.Display \n5.Exit" << endl;
        }
    }
    return 0;
}
