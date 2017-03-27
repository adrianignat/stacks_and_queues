#include <iostream>
#include "Point.h"

using namespace std;

Point::Point(float x, float y) {
    this->x = x;
    this->y = y;
}

void Point::display() {
    cout<<"Les coordonnees sont: "<< x << " " << y;
}

void Point::setX(float x) {
    this->x = x;
}

void Point::setY(float y) {
    this->y = y;
}