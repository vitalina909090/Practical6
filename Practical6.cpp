#include <iostream>
#include <Windows.h>
#include <cassert>
using namespace std;

class Time {
    int seconds;
    int minutes;
    int hours;

public:
    Time(int h, int m, int s) : hours(h), minutes(m), seconds(s) {

    }
    Time() : Time(0, 0, 0) {}

    void transfer() {
        if (seconds >= 60) {
            minutes += seconds / 60;
            seconds %= 60;
        }
        if (minutes >= 60) {
            hours += minutes / 60;
            minutes %= 60;
        }
        if (hours < 0) {
            hours = 0;
            minutes = 0;
            seconds = 0; 
        }
    }


};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    return 0;
}