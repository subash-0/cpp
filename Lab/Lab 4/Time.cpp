#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour(0), minute(0), second(0) {}
    Time(int hour, int minute, int second) : hour(hour), minute(minute), second(second) {}

    Time addTime(const Time& otherTime) const {
        int totalSeconds = timeToSeconds() + otherTime.timeToSeconds();
        return secondsToTime(totalSeconds);
    }

    void display12HourFormat() const {
        int hour12 = hour % 12 == 0 ? 12 : hour % 12;
        string period = hour < 12 ? "AM" : "PM";
        cout<<"\n"<<hour12<<":"<<minute<<":"<<second<<period.c_str()<<endl;
    }

    void display24HourFormat() const {
        cout<<"\n"<<hour<<":"<<minute<<":"<<second<<endl;
    }

private:
    int timeToSeconds() const {
        return hour * 3600 + minute * 60 + second;
    }

    static Time secondsToTime(int totalSeconds) {
        int hour = totalSeconds / 3600;
        int minute = (totalSeconds % 3600) / 60;
        int second = (totalSeconds % 3600) % 60;
        return Time(hour, minute, second);
    }
};

int main() {
    Time time1(2, 30, 45);
    Time time2(1, 15, 10);
    Time sumTime = time1.addTime(time2);

    cout << "Time 1 (12-hour format): ";
    time1.display12HourFormat();
    cout << "Time 1 (24-hour format): ";
    time1.display24HourFormat();
    cout << "Time 2 (12-hour format): ";
    time2.display12HourFormat();
    cout << "Time 2 (24-hour format): ";
    time2.display24HourFormat();
    cout << "Sum of Time 1 and Time 2 (12-hour format): ";
    sumTime.display12HourFormat();
    cout << "Sum of Time 1 and Time 2 (24-hour format): ";
    sumTime.display24HourFormat();

    return 0;
}
