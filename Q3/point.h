#ifndef POINT_H
#define POINT_H
#include<iostream>

class Point{
    private:
        double x,y;                 // x and y of point

    public:
        Point() = default;          // Defult Constructor
        Point(double, double);      // Constructor
        //~Point();
        double getX() {return x;};  // Get x of point
        double getY() {return y;};  // Get y of point
        void setX(double);          // Set x of point
        void setY(double);          // Set y of point
};
#endif

