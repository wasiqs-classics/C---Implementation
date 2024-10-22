// question04.cpp

#include "question04.h"
#include <iostream>
using namespace std;

// Default constructor
Vector2D::Vector2D() : x(0), y(0) {}

// Parameterized constructor
Vector2D::Vector2D(int x, int y) : x(x), y(y) {}

// Set vector values
void Vector2D::setVector(int x, int y) {
    this->x = x;
    this->y = y;
}

// Get x value
int Vector2D::getX() const {
    return x;
}

// Get y value
int Vector2D::getY() const {
    return y;
}

// Print the vector
void Vector2D::printVector() const {
    cout << "(" << x << ", " << y << ")" << endl;
}

// Overloading the * operator to calculate the dot product
int Vector2D::operator*(const Vector2D& other) const {
    return (x * other.x) + (y * other.y);
}
