// question06.h

#ifndef QUESTION06_H
#define QUESTION06_H

#include <string>
using namespace std;

// Investment class
class Investment {
protected:
    double initialValue;
    double currentValue;

public:
    Investment();
    Investment(double initial, double current);
    double calculateProfit() const;
    double calculatePercentProfit() const;
    virtual void display() const;
};

// House class
class House {
protected:
    string address;
    int squareFeet;

public:
    House();
    House(string addr, int sqFeet);
    virtual void display() const;
};

// HouseThatIsAnInvestment class (inherits from both Investment and House)
class HouseThatIsAnInvestment : public Investment, public House {
public:
    HouseThatIsAnInvestment();
    HouseThatIsAnInvestment(double initial, double current, string addr, int sqFeet);
    void display() const override;
};

#endif
