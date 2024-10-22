// question06.cpp

#include "question06.h"
#include <iostream>
using namespace std;

// Investment class implementation
Investment::Investment() : initialValue(0.0), currentValue(0.0) {}

Investment::Investment(double initial, double current) : initialValue(initial), currentValue(current) {}

double Investment::calculateProfit() const {
    return currentValue - initialValue;
}

double Investment::calculatePercentProfit() const {
    if (initialValue == 0) return 0;
    return (calculateProfit() / initialValue) * 100;
}

void Investment::display() const {
    cout << "Initial Value: $" << initialValue << endl;
    cout << "Current Value: $" << currentValue << endl;
    cout << "Profit: $" << calculateProfit() << endl;
    cout << "Percent Profit: " << calculatePercentProfit() << "%" << endl;
}

// House class implementation
House::House() : address("Unknown"), squareFeet(0) {}

House::House(string addr, int sqFeet) : address(addr), squareFeet(sqFeet) {}

void House::display() const {
    cout << "Address: " << address << endl;
    cout << "Square Feet: " << squareFeet << " sq ft" << endl;
}

// HouseThatIsAnInvestment class implementation
HouseThatIsAnInvestment::HouseThatIsAnInvestment() : Investment(), House() {}

HouseThatIsAnInvestment::HouseThatIsAnInvestment(double initial, double current, string addr, int sqFeet)
    : Investment(initial, current), House(addr, sqFeet) {}

void HouseThatIsAnInvestment::display() const {
    House::display();   // Display house information
    Investment::display();   // Display investment information
}
