#include "knot.hh"
#include <iostream>

Knot::Knot (double x, double y)
  : p_ (Point (x, y)),
    up_ (NULL),
    right_ (NULL),
    down_ (NULL),
    left_ (NULL)

{
}

Knot::~Knot()
{
}

void Knot::set_point (Knot* p, Direction d)
{
  if (d == UP)
    up_ = p;
  else if (d == DOWN)
    down_ = p;
  else if (d == RIGHT)
    right_ = p;
  else if (d == LEFT)
    left_ = p;
}

Knot* Knot::get_point (Direction d)
{
  if (d == UP)
    return up_;
  else if (d == DOWN)
    return down_;
  else if (d == RIGHT)
    return right_;
  else if (d == LEFT)
    return left_;

  return NULL;
}

Point& Knot::point_get ()
{
  return p_;
}

std::ostream& operator<< (std::ostream& o, Knot& k)
{
  o << k.point_get ().x_get () << "\t" << k.point_get ().y_get () << std::endl;
  return o;
}
