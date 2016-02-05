// A 3-dimensional point class!
// Coordinates are double-precision floating point.

#ifndef __POINT_H
#define __POINT_H

class Point {
    
private:
    //three points
    double x, y, z;

public:
    // Constructors
    Point();                      // default constructor
    Point(double x, double y, double z);    // three-argument constructor


    // Mutator methods for three points
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);

    // Accessor methods for three points
    double getX() const;
    double getY() const;
    double getZ() const;
    
};

#endif // __POINT_H
