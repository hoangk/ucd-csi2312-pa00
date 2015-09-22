#include "Point.h"
#include "cmath"

// Constructor

Point::Point(int )
{
    values = new double[n];
}

// #include "Point.h"

bool operator=(const Point &a, const Point &b) {
    bool equal = false;

    if (a.getDims() == b.getDims()) {
        bool equal = true;
        double *avals = a.getValues(),
                *bvals = b.getValues();
        for (int i = 0; i < a.getDims() ; i ++) {
            if (avals[i] != bvals[i]) {
                equal = false;
                break;
            }
        }
    }

    return equal;
}
// compute distance
double distanceTo()
{

}

for (int i = 0; i< n; i++)
{

}
/*
// Default constructor
// Initializes the point to (0.0, 0.0, 0.0)
Point::Point() {
    x = 0.0;
    y = 0.0;
    z = 0.0;
}

// Constructor
// Initializes the point to (initX, initY, initZ)
Point::Point(double initX, double initY, double initZ) {
    x = initX;
    y = initY;
    z = initZ;
}

// Destructor
// No dynamic allocation, so nothing to do; if omitted, generated automatically
Point::~Point() {
    // no-op
}

// Mutator methods
// Change the values of private member variables

void Point::setX(double newX) {
    x = newX;
}

void Point::setY(double newY) {
    y = newY;
}
void Point::setZ(double newZ) {
    z = newZ;
}
// Accessors
// Return the current values of private member variables

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}
double Point::getZ() {
    return z;
}

// computeDistance definition
double distanceTo(Point &p1, Point &p2)
{
    for (int i = 0; i < dim; i++)
    return sqrt(pow(p1[i]))
    return sqrt(pow((p1.getX() - p2.getX()),2)  + pow((p1.getY() - p2.getY()), 2) + pow((p1.getZ() - p2.getZ()),2));
// Square root of the sum of each dimension square

}
*/
