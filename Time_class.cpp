#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
private:
    int hour;
    int minute;

public:
    Time(int h = 0, int m = 0);

    void setTime(int h, int m);

    void showTime();

    Time add(Time);
};

Time ::Time(int h, int m)
{
    hour = h;
    minute = m;
}

void Time ::setTime(int h, int m)
{
    hour = h;
    minute = m;
}

void Time ::showTime()
{
    cout << hour << ":" << minute << "\n";
}

Time Time ::add(Time T)
{
    Time t;
    t.minute = minute + T.minute;
    t.hour = t.minute / 60;
    t.minute = t.minute % 60;
    t.hour += hour + T.hour;
    return t;
}

int main()
{
    Time t1, t2, t3;
    int h1, m1, h2, m2;

    cout << "Enter the hour for first time interval : ";
    cin >> h1;
    cout << "Enter the minute for first time interval : ";
    cin >> m1;
    t1.setTime(h1, m1);

    cout << "Enter the hour for second time interval : ";
    cin >> h2;
    cout << "Enter the minute for second time interval : ";
    cin >> m2;
    t2.setTime(h2, m2);
    
    t3 = t1.add(t2);

    cout << "t1 is ";
    t1.showTime();

    cout << "\nt2 is ";
    t2.showTime();
    
    cout << "\nsum of time t1 and t2 is ";
    t3.showTime();
    return 0;
}
