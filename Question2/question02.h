// question02.h

#ifndef QUESTION02_H
#define QUESTION02_H

#include <string>
using namespace std;

// Time class
class Time {
public:
    Time();
    Time(int hr, int min);
    void setTime(int hr, int min);
    void getTime(int& hr, int& min);
    void printTime() const;
    void incrementHours();
    void incrementMinutes();

private:
    int hr;
    int min;
};

// Date class
class Date {
public:
    Date();
    Date(int month, int day, int year);
    void setDate(int month, int day, int year);
    void getDate(int& month, int& day, int& year);
    void printDate() const;

private:
    int month;
    int day;
    int year;
};

// Event class
class Event {
public:
    Event(int hours = 0, int minutes = 0, int m = 1, int d = 1, int y = 1900, string name = "Independence Day");
    void setEventData(int hours, int minutes, int m, int d, int y, string name);
    void printEventData() const;

private:
    string eventName;
    Time eventTime;
    Date eventDay;
};

#endif
