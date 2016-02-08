//
// Created by CORONA'S on 2/5/2016.
// this will use herons forumla for the distance
//
#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
    // calculating the distance for the 3 sides fo the 3d triangle and storing them
    double distanceA = a.distanceTo(b);
    double distanceB = b.distanceTo(c);
    double distanceC = c.distanceTo(a);

    double area = ((distanceA + distanceB + distanceC)/2);


    // returns area from Heron's formula
    double result =  sqrt(area * (area - distanceA) * (area - distanceB) * (area - distanceC));

    return result;
}