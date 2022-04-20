#include "Circle.h"
using namespace std;


Circle::Circle()
{
    radius = 0;
}                                       //Default Constructor sets radius to 0.0
Circle::Circle(double rad)
{
    setRadius(rad);
}                                       //Constructor, accepts radius as an arguement
void Circle::setRadius(double rad)
{
    radius = rad;
}                                       //Mutator
double Circle::getRadius()
{
    return radius;
}                                       //Accessor
double Circle::getArea()
{
    return pi * radius * radius;
}
double Circle::getDiameter()            //Acessor
{
    return radius * 2;
}
double Circle::getCircumferance()       //Acessor
{
    return 2 * pi * radius;
}

Circle Circle::operator++(int)          // Postfix ++ Overload Func. Definition
{
    Circle temp(radius);
    radius++;
    return temp;
}

Circle Circle::operator--()             //Postfix -- Overload Func. Definition
{
    if (radius == 0)
    {
        return radius;
    }
    else
    {
        --radius;
        return radius;
    }
}

bool Circle::operator>(const Circle & a)            //Relational Overload Func. Definition
{
    bool status;
    if ( radius > a.radius )
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}

bool Circle::operator<(const Circle & a)            //Relational Overload Func. Definition
{
    bool status;
    if ( radius < a.radius )
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}

bool Circle::operator==(const Circle & a)           // Relational Overload Func. Definition
{
    bool status;
    if ( radius == a.radius )
    {
        status = true;
    }
    else
    {
        status = false;
    }
    return status;
}
