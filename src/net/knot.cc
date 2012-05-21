#include "knot.hh"
#include "../geometry/point.hh"

Knot::Knot (double x, double y)
  : p_ (Point (x, y)),
    up_ (NULL),
    right_ (NULL),
    down_ (NULL),
    left_ (NULL),

{
}

Knot::~Knot()
{
}

void set_point (Point* p, Direction d)
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

Point* get_point (Direction d)
{
  if (d == UP)
    return up_;
  else if (d == DOWN)
    return down_;
  else if (d == RIGHT)
    return right_;
  else if (d == LEFT)
    return left_;
}

Point& point_get ()
{
  return p_;
}
