#include "Cluster.h"

// Cluster.cpp
// Note: not all methods shown

// copy ctor
Cluster(const Cluster &rhs)
        : size(rhs.size), capacity(rhs.capacity) {
    points = new PointPtr[capacity];
    for (int i = 0; i < capacity; i++)
        points[i] = nullptr;
    for (int i = 0; i < size; i++)
        points[i] = new Point(rhs.points[i]);
}

// assignment oper
Cluster &operator=(const Cluster &rhs) {
    if (this == &rhs) {
        return *this;
    } else {
        if (points != nullptr) {
            for (int i = 0; i < size; i++)
                delete points[i];
            delete [] points;
        }

        this->size = rhs.size;
        this->capacity = rhs.capacity;

        this->points = new PointPtr[capacity];
        for (int i = 0; i < capacity; i++)
            this->points[i] = nullptr;
        for (int i = 0; i < size; i++)
            this->points[i] = new Point(rhs.points[i]);
    }

    return *this;
}

// dtor
~Cluster() {
    if (points != nullptr) {
        for (int i = 0; i < size; i ++)
            delete points[i];
        delete [] points;
    }
    points = nullptr;
}

// assignment oper
Cluster &operator=(const Cluster &rhs) { // rhs - right-hand side
    if (this == &rhs) { // check for self-assignment (like c1 = c1;)
        return *this; // return the current object
    } else {
        // clean up the current object's members
        // copy over the static members of rhs
        // allocate new copies of the dynamic members or rhs
    }

    return *this; // return the current object
}

