#include "border.hh"

# define DEFAULT_X1 10
# define DEFAULT_Y1 10

Border::Border()
  : origin_ (Point (0, 0)),
    x1_ (DEFAULT_X1),
    y1_ (DEFAULT_Y1),
    x2_ (0),
    y2_ (0)
{
}

Border::Border(Point& origin, double x1, double x2, double y1, double y2)
  : origin_ (origin),
    x1_ (x1),
    y1_ (y1),
    x2_ (x2),
    y2_ (y2)
{
}

Border::~Border()
{
}

bool Border::is_inrectangle1(Point& p)
{
  Point* diff = p - origin_;

  if (diff->x_get () < x1_ && diff->y_get () < y1_)
  {
    delete diff;
    return true;
  }

  delete diff;

  return false;

}

bool Border::is_inrectangle1(double x, double y)
{
  if ((x - origin_.x_get ()) < x1_ && (y - origin_.y_get ()) < y1_)
    return true;
  return false;
}

bool Border::is_inrectangle2(Point& p)
{
/*  Point* diff = p - origin;

  if ((diff->x_get () - x1_) < x2_ && (diff->y_get () - y1_) < y2_)
  {
    delete diff;
    return true;
  }

  delete diff;
*/

  p.distance ();
  return false;
}

bool Border::is_inrectangle2(double x, double y)
{
  x = x;
  y = y;
  // if ((x - origin_.x_get () - x1_+) < x_ && (y - origin_.y_get ()) < y1_)
  //  return true;
  return false;
}


bool Border::is_inborder(Point& p)
{
  return is_inrectangle1(p) || is_inrectangle2(p);
}

bool Border::is_inborder(double x, double y)
{
  return is_inrectangle1(x, y) || is_inrectangle2(x, y);
}
