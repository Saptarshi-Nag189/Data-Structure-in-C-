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
        int x;
        cout << "Enter the element : ";
        cin >> x;
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
            q[rear] = x;
            cout << x << " inserted in queue\n";
        }
        else if ((rear + 1) % max == front)
            cout << "Queue is full" << endl;
        else
        {
            rear = (rear + 1) % max;
            q[rear] = x;
            cout << x << " inserted in queue\n";
        }
    }

    void dequeueFront()
    {
        if (front == -1 && rear == -1)
            cout << "Empty" << endl;
        else if (front == rear)
            front = rear = -1;
        else if (front == max - 1)
            front = 0;
        else
        {
            cout << q[front] << " removed from front\n";
            front++;
        }
    }

    void dequeueRear()
    {
        if (front == -1 && rear == -1)
            cout << "Queue is empty" << endl;
        else if (front == rear)
            front = rear = -1;
        else if (rear == 0)
            rear = max - 1;
        else
        {
            cout << q[rear] << " removed from rear\n";
            rear--;
        }
    }

    void displayQueue()
    {
        int i = front;
        cout << "Queue elements: ";
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
    cout << "\n1.Insert \n2.Remove from rear \n3.Remove from front \n4.Display \nOthers to exit" << endl;
    while (temp)
    {
        cout << "Enter the choice : " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            queue1.enQueue();
            break;
        case 2:
            queue1.dequeueRear();
            break;
        case 3:
            queue1.dequeueFront();
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