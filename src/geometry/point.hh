#ifndef POINT_HH_
# define POINT_HH_

class Point
{
  public:
    Point (double x, double y);
    ~Point ();

    Point* operator- (Point p);
    double operator* (Point p);
    double distance ();

    bool samex (Point p);
    bool samey (Point p);

    double x_get ();
    double y_get ();

  private:
    double x_;
    double y_;
};

#endif /* !POINT_HH_ */
