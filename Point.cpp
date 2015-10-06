
#include "Point.h"
#include <cmath>



namespace Clustering {

    Clustering::Point::Point(int initDim) {
        if (initDim != 0) {
            m_Dims = initDim;
            values = new double[m_Dims];

        }

    }

// create an array, have pointer point at array

    Clustering::Point::Point(int i, double *pDouble) {
        if (i != 0) {
            m_Dims = i;
            pDouble = new double[m_Dims];
        }
    }

    Clustering::Point::Point(const Point &point) {
    m_Dims = point.m_Dims;
        values = new double[m_Dims];
        for (int i = 0; i < m_Dims; i++){
            values[i] = point.values[i];

        }
    }


    void Point::setValues(int i, double d) {
       if ((i >= 1) && (i <= m_Dims)){

               values[i - 1] = d;
           }
       }



    double Point::getValues(int i) const {
        if ((i >= 1) && (i <= m_Dims)){

           return values[i - 1];
        }
        else return 0;
    }


    Clustering::Point &Clustering::Point::operator=(const Clustering::Point &point) {
        m_Dims = point.m_Dims;
        values = new double[m_Dims];
        for (int i = 0; i < m_Dims; i++){
            values[i] = point.values[i];

        }
        return *this;


    }

// destructor
    Clustering::Point::~Point() {
    delete [] values;

}

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

    double Point::distanceTo(const Point &a) const{
        if (a.m_Dims == m_Dims) {
            double sum = 0.0;
            for (int i = 0; i < m_Dims; i++) {
               sum += ((a.values[i] - values[i])*(a.values[i] - values[i]));
            }
            return sqrt (sum);
        }
        return 0;
    }


    Clustering::Point &Clustering::Point::operator*=(double d) {
        for(int i = 0; i< m_Dims; i++){
            values[i] *= d;
        }
        return *this;
    }

    Clustering::Point &Clustering::Point::operator/=(double d) {
    for (int i = 0; i < m_Dims; i++){
        values[i] /= d;
    }
    return *this;
    }

    const Clustering::Point Clustering::Point::operator*(double d) const {
        Point tempValues(m_Dims);
        for (int i = 0; i < m_Dims; i++) {
            tempValues.values[i] = values[i] * d;
        }
        return tempValues;
    }

    const Clustering::Point Clustering::Point::operator/(double d) const {
        Point tempValues(m_Dims);
        for (int i = 0; i < m_Dims; i++) {
            tempValues.values[i] = values[i] / d;
        }
        return tempValues;
    }

    Clustering::Point &Clustering::operator+=(Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            point.values[i] += point1.values[i];
        }
        return point;
    }

    Clustering::Point &Clustering::operator-=(Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            point.values[i] -= point1.values[i];
        }
        return point;
    }

    const Clustering::Point Clustering::operator+(const Clustering::Point &point, const Clustering::Point &point1) {
        Point tempValues(point.m_Dims);
        for (int i = 0; i < point.m_Dims; i++) {
                tempValues.values[i] = point.values[i] + point1.values[i];
            }
        return tempValues;

    }

    const Clustering::Point Clustering::operator-(const Clustering::Point &point, const Clustering::Point &point1) {
        Point tempValues(point.m_Dims);
        for (int i = 0; i < point.m_Dims; i++) {
            tempValues.values[i] = point.values[i] - point1.values[i];
        }
        return tempValues;
    }

    bool Clustering::operator==(const Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            if (point.values[i] != point1.values[i])

        return false;
    }
        return true;
    }

    bool Clustering::operator!=(const Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            if (point.values[i] != point1.values[i])

                return true;
        }
        return false;
    }

    bool Clustering::operator<(const Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            if (point.values[i] < point1.values[i])

                return true;
        }
        return false;
    }

    bool Clustering::operator>(const Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            if (point.values[i] > point1.values[i])

                return true;
        }
        return false;
    }

    bool Clustering::operator<=(const Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            if (point.values[i] <= point1.values[i])

                return true;
        }
        return false;
    }

    bool Clustering::operator>=(const Clustering::Point &point, const Clustering::Point &point1) {
        for (int i = 0; i < point.m_Dims; i++) {
            if (point.values[i] >= point1.values[i])

                return true;
        }
        return false;
    }

    std::ostream &Clustering::operator<<(std::ostream &ostream, const Clustering::Point &point) {
        for (int i = 0; i < point.m_Dims; i++ ) {
            ostream << point.values[i] << std::endl;
        }
        return ostream;
    }

    std::istream &Clustering::operator>>(std::istream &istream, Clustering::Point &point) {
        for (int i = 0; i < point.m_Dims; i++ ) {
            istream >> point.values[i];
        }
        return istream;

    }



}
