// question04_driver.cpp

#include "question04.h"
#include <iostream>
using namespace std;

int main() {
    // Create two vectors
    Vector2D vector1(3, 4);
    Vector2D vector2(2, 5);

    // Display the vectors
    cout << "Vector 1: ";
    vector1.printVector();
    
    cout << "Vector 2: ";
    vector2.printVector();

    // Calculate the dot product using overloaded * operator
    int dotProduct = vector1 * vector2;
    cout << "Dot Product: " << dotProduct << endl;

    return 0;
}
