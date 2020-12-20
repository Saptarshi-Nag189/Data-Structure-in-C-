#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex() //Default constructor
    {
    }
    complex(int r, int i) //Parametrized constructor
    {
        real = r;
        img = i;
    }
    complex(const complex &c) //Copy constructor
    {
        real = c.real;
        img = c.img;
    }
    void set(int r, int i)
    {
        real = r;
        img = i;
    }
    void display()
    {
        if (img >= 0)
            cout << real << "+" << img << "i" << "\n";
        else
            cout << real << img << "i" << "\n";
    }
    complex sum(complex C)
    {
        complex t;
        t.real = real + C.real;
        t.img = img + C.img;
        return t;
    }
};
int main()
{
    complex c1, c3;
    cout << "Enter the real and imaginary values of the complex number : ";
    int a1, b1;
    cin >> a1 >> b1;
    c1.set(a1, b1);

    complex c2 = c1;
    cout << endl << "The values of the complex numbers : \n";

    cout << "C1 = ";
    c1.display();

    cout << endl << "C2 = ";
    c2.display();

    c3 = c1.sum(c2);
    cout << "The resultant complex number C3 = ";
    c3.display();
    return 0;
}