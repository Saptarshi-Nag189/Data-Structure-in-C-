#include <iostream>
using namespace std;

int pass = 1;
int count = 0;
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
        cout << A[i] << "  ";

    cout << "\n";
}

void Swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int partitionFirst(int a[], int low, int high)
{
    int pivot = a[low];
    int left = low + 1;
    int right = high;
    int temp;
    cout << "\nPivot = " << pivot;

    do
    {
        while (a[left] <= pivot && ++count)
            left++;

        while (a[right] > pivot && ++count)
            right--;

        if (left < right)
        {
            Swap(a[left], a[right]);
            cout << "\nSwapping " << a[left] << " and " << a[right] << "\n";
        }

    } while (left < right);

    // Swap a[low] and a[right]
    cout << "\nSwapping " << a[low] << " and " << a[right] << "\n";
    Swap(a[low], a[right]);
    return right;
}

int partitionLast(int a[], int low, int high)
{
    int pivot = a[high];
    int left = low - 1;
    int right = high;
    cout << "\nPivot = " << pivot;

    while (left < right)
    {
        do
        {
            left++;
        } while (a[left] < pivot && ++count);

        do
        {
            right--;
        } while (right >= 0 && a[right] > pivot && ++count);

        if (left < right)
        {
            Swap(a[left], a[right]);
            cout << "\nSwapping " << a[left] << " and " << a[right] << "\n";
        }
    }

    // Swap a[high] and a[left]
    cout << "\nSwapping " << a[left] << " and " << a[high] << "\n";
    Swap(a[high], a[left]);
    return left;
}

int partitionMedian(int a[], int low, int high)
{
    int pivot = a[(low + high) / 2];
    int left = low - 1;
    int right = high;

    cout<<"\nPivot = "<<pivot;
    while (left < right)
    {
        do{
            left++;
        } while (left <= high && a[left] < pivot && ++count);

        do{
            right--;
        }while (right >= low && a[right] > pivot && ++count);

        if (left < right)
        {
            cout << "\nSwapping " << a[left] << " and " << a[right] << "\n";
            Swap(a[left], a[right]);
        }
    }

    return right;
}

void quickSort(int a[], int low, int high, int x, int size)
{
    int partitionIndex; // Index of pivot after partition

    if (low < high)
    {
        if (x == 1)
            partitionIndex = partitionFirst(a, low, high);
        else if (x == 2)
            partitionIndex = partitionLast(a, low, high);
        else if (x == 3)
            partitionIndex = partitionMedian(a, low, high);
        else
        {
            cout << "Wrong input";
            exit(1);
        }
        cout << "\nPass: " << pass << "\n";
        printArray(a, size);
        cout << "\n----------------------------------------------------------------";
        pass++;
        quickSort(a, low, partitionIndex - 1, x, size);  // sort left subarray
        quickSort(a, partitionIndex + 1, high, x, size); // sort right subarray
    }
}

int main()
{
    int n;
    cout << "\nEnter array size: ";
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter element no. " << i + 1 << "\n";
        cin >> a[i];
    }

    cout << "Unsorted array: ";
    printArray(a, n);

    int x;
    cout << "1. First as pivot \n2. Last as pivot \n3. Median as pivot \n\nEnter your choise:";
    cin >> x;

    quickSort(a, 0, n - 1, x, n);
    cout << "\nSorted array: ";
    printArray(a, n);

    cout << "\nTotal no. of pass: " << --pass;
    cout<<"\nTotal no. of comparison: "<<count;
    
    return 0;
}