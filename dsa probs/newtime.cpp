#include <iostream>
using namespace std;

class Time {
    int hour;
    int minute;

public:
    Time(int h, int m) : hour(h), minute(m) {}

    int operator-() {
        return --minute;
    }

    int operator--() {
        return --hour;
    }

    void print() {
        if (minute == 0 && hour == 0) {
            cout << "Wrong time is entered" << endl;
        } else if (minute == 0) {
            cout << --hour << " " << minute << endl;
        } else {
            cout << hour << " " << -minute << endl;
        }
    }
};

int main() {
    Time t1(12, 23); // Creating the object t1 with initial time 12 hours and 23 minutes
    t1.print(); // Printing the time using the print method of the Time class
    return 0;
}

