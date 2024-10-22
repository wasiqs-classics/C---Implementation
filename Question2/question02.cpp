// question02.cpp
// Answer to the question
// ======================
// The relationship between the Date, Time, and Event classes in Question 2 is a composition relationship.
// The Event class contains both a Time object (representing the time of the event) and a Date object (representing the date of the event) as member variables.
// This indicates that an Event "has-a" Time and "has-a" Date.
// The Event class relies on these objects to store and manage the event's specific time and date details, demonstrating a "whole-part" relationship where Event is the whole, and Date and Time are parts of it.

#include "question02.h"
#include <iostream>
using namespace std;

// Time class implementation
Time::Time() : hr(0), min(0) {}

Time::Time(int h, int m) : hr(h), min(m) {}

void Time::setTime(int h, int m) {
    hr = h;
    min = m;
}

void Time::getTime(int& h, int& m) {
    h = hr;
    m = min;
}

void Time::printTime() const {
    cout << (hr < 10 ? "0" : "") << hr << ":" << (min < 10 ? "0" : "") << min << endl;
}

void Time::incrementHours() {
    hr++;
    if (hr >= 24) hr = 0; // this wraps the hours around after 24 hours
}

void Time::incrementMinutes() {
    min++;
    if (min >= 60) {
        min = 0;
        incrementHours();
    }
}

// Date class implementation
Date::Date() : month(1), day(1), year(1900) {}

Date::Date(int m, int d, int y) : month(m), day(d), year(y) {}

void Date::setDate(int m, int d, int y) {
    month = m;
    day = d;
    year = y;
}

void Date::getDate(int& m, int& d, int& y) {
    m = month;
    d = day;
    y = year;
}

void Date::printDate() const {
    cout << (month < 10 ? "0" : "") << month << "/" << (day < 10 ? "0" : "") << day << "/" << year << endl;
}

// Event class implementation
Event::Event(int hours, int minutes, int m, int d, int y, string name)
    : eventTime(hours, minutes), eventDay(m, d, y), eventName(name) {}

void Event::setEventData(int hours, int minutes, int m, int d, int y, string name) {
    eventTime.setTime(hours, minutes);
    eventDay.setDate(m, d, y);
    eventName = name;
}

void Event::printEventData() const {
    cout << "Event: " << eventName << endl;
    cout << "Time: ";
    eventTime.printTime();
    cout << "Date: ";
    eventDay.printDate();
}
