//
// Created by CORONA'S on 2/5/2016.
//
#include <cmath>
#include "Point.h"

//default constructor giving the initial value to zero
    Point::Point()
    {
        __x = 0;
        __y = 0;
        __z = 0;
    }

//assigning the value to the point
    Point::Point(double x, double y, double z)
    {
        __x = x;
        __y = y;
        __z = z;
    }

// Mutators methods for three points


    void Point::setX(double newX)
    {
        __x = newX;
    }
    void Point::setY(double newY)
    {
        __y = newY;
    }
    void Point::setZ(double newZ)
    {
        __z = newZ;
    }

// Accessor methods for three points
    double Point::getX() const
    {
        return __x;
    }
    double Point::getY() const
    {
        return __y;
    }
    double Point::getZ() const
    {
        return __z;
    }

//member function called disatnceTo
    double Point::distanceTo(const Point &otherPoint) const
    {
        return sqrt((__x - otherPoint.getX())*(__x - otherPoint.getX()) +
                    (__y - otherPoint.getY())*(__y - otherPoint.getY()) +
                    (__z - otherPoint.getZ())*(__z - otherPoint.getZ()));
    }

// Destructor
    Point::~Point()
    {
        //deleted
    }






















