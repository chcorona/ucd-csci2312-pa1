//
// Created by CORONA'S on 2/5/2016.
//
#include <cmath>
#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c)
{
    double area = ((a.distanceTo(b) + b.distanceTo(c) + c.distanceTo(a))/2.0);

    return sqrt(area * (area - a.distanceTo(b)) * (area - b.distanceTo(c)) * (area - c.distanceTo(a)));
}