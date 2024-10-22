// question05_driver.cpp

#include "question05.h"
#include <iostream>
using namespace std;

int main() {
    // Create an array of Product pointers for polymorphic behavior
    Product* products[3];

    // Create instances of Product, PrepackedFood, and FreshFood
    products[0] = new Product("1001", "Generic Product");
    products[1] = new PrepackedFood("2002", "Chips", 2.50);
    products[2] = new FreshFood("3003", "Apples", 1.2, 3.0);

    // Polymorphic behavior: display details of each product
    for (int i = 0; i < 3; i++) {
        products[i]->printer();
        cout << endl;
    }

    // Clean up memory
    for (int i = 0; i < 3; i++) {
        delete products[i];
    }

    return 0;
}
