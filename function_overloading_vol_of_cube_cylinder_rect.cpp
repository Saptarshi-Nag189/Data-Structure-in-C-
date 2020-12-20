#include <iostream>

using namespace std;

double pi=(22.0/7);
int vol(int x)
{
    return (x * x * x);
}

double vol(double rad, double height)
{
    return (pi * rad * rad * height);
}

int vol(int len, int bre, int hei)
{
    return (len * bre * hei);
}

int main()
{
    int a, l, b, hi;
    double r, h;
    cout << "\nEnter side of cube ";
    cin >> a;
    cout << "\nVolume of cube is " << vol(a);

    cout << "\n\nEnter radius of cylinder ";
    cin >> r;
    cout << "\nEnter height of cylinder ";
    cin >> h;
    cout << "\n\nVolume of cylinder is " << vol(r, h);

    cout << "\n\nEnter lenghth of cuboid ";
    cin >> l;
    cout << "\nEnter bereadth of cuboid ";
    cin >> b; 
    cout << "\nEnter height of cuboid ";
    cin >> hi;
    cout << "\n\nVolume of cuboid is " << vol(l, b, hi);

    return 0;
}