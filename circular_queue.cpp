#include <iostream>
#define max 5

using namespace std;

class Queue
{
private:
    int cq[max], front, rear;

public:
    Queue()
    {
        front = rear = -1;
    }

    int isFull()
    {
        if ((front == 0 && rear == max - 1) || (front == rear + 1))
            return 1;
        return 0;
    }

    int isEmpty()
    {
        if (front == -1)
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
            cout << "\nQueue is full. Nothing can be inserted  \n";
        else
        {
            if (front == -1)
                front = 0;
            rear = (rear + 1) % max;
            cq[rear] = val;
            cout << "\nInserted " << val << " in queue\n";
        }
    }

    int deQueue()
    {
        int a=-1;
        if (isEmpty())
            cout << "\nQueue is empty. Nothing can be deleted \n";
        else
        {
            a = cq[front];
            if (front == rear)
            {
                front = -1;
                rear = -1;
            }
            else
                front = (front + 1) % max;
        }
        return a;
    }

        void displayQueue()
        {
            int i;
            if (isEmpty())
                cout << "\nEmpty Queue. Nothing to display\n";

            else
            {
                cout << "\nFront is " << front << "\n";
                cout << "\nQueue Elements\n ";
                for (i = front ; i != rear; i = (i + 1) % max)
                    cout << cq[i] << "\t";
                cout << cq[i] << "\t\n";
                cout << "\nRear is " << rear << "\n";
            }
    }
};

int main()
{
    Queue q;
    int ch;
    cout << "\n Press 1 to Enter an element\nPress 2 to delete first element\nPress 3 to display\nPress 4 to exit\nEnter your choice.";
    cin>>ch;

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