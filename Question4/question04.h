// question04.h

#ifndef QUESTION04_H
#define QUESTION04_H

class Vector2D {
private:
    int x;
    int y;

public:
    Vector2D();
    Vector2D(int x, int y);
    void setVector(int x, int y);
    int getX() const;
    int getY() const;
    void printVector() const;

    // Overload the * operator to calculate the dot product
    int operator*(const Vector2D& other) const;
};

#endif
