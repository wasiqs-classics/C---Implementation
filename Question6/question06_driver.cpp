// question06_driver.cpp

#include "question06.h"
#include <iostream>
using namespace std;

int main() {
    // Create a HouseThatIsAnInvestment object
    HouseThatIsAnInvestment myHouse(150000.0, 200000.0, "123 Elm St", 2500);

    // Display details about the house and the investment
    myHouse.display();

    return 0;
}
