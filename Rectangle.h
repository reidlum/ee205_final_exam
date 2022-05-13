///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_final_exam - EE 205 - Spr 2022
///
/// @file Rectangle.h
/// @version 1.0
///
/// @author Reid Lum <reidlum@hawaii.edu>
/// @date   13_May_2022
///////////////////////////////////////////////////////////////////////////////
#include "Shape.h"
class Rectangle : public Shape {
protected:
    double length;
    double width;

public:
    Rectangle(double newLength, double newWidth);

    double getLength() const;

    double getWidth() const;

};

