#include <iostream>
#include "Point.h"

using namespace std;

int main() {

    Clustering::Point p1[1,2,3], p2[0,0,0,0];

    double d;
    d = distanceTo( p1, p2);

    cout << "Hello, World!" << endl;
    return 0;
}