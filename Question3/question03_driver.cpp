// question03_driver.cpp

#include "question03.h"
#include <iostream>
using namespace std;

int main() {
    // Creating a transaction
    Transaction sale(1533, 1095, 420.50, 25, "Ali");
    sale.displayTransaction();

    return 0;
}
