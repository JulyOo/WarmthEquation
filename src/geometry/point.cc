#include "point.hh"

#include <math.h>

Point::Point (double x, double y)
  : x_ (x),
    y_ (y)
{
}

Point::~Point ()
{
}

Point* Point::operator- (Point& p)
{
  return new Point(x_ - p.x_, y_ - p.y_);
}

double Point::operator* (Point& p)
{
  return x_ * p.x_ + y_ * p.y_;
}

double Point::distance ()
{
  return sqrt (x_ * x_ + y_ * y_);
}

double Point::x_get ()
{
  return x_;
}

double Point::y_get ()
{
  return y_;
}

bool Point::samex (Point& p)
{
  return x_ == p.x_;
}

bool Point::samey (Point& p)
{
  return y_ == p.y_;
}
