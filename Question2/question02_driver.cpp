// question02_driver.cpp

#include "question02.h"
#include <iostream>
using namespace std;

int main() {
    // Creating a default event 
    Event defaultEvent;
    defaultEvent.printEventData();
    cout << endl;

    // Creating a custom event
    Event customEvent(14, 30, 12, 25, 2024, "Birthday Party");
    customEvent.printEventData();
    cout << endl;

    // Setting new event data
    customEvent.setEventData(18, 45, 1, 1, 2025, "New Year Party");
    customEvent.printEventData();

    return 0;
}
