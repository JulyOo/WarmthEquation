#ifndef BORDER_HH_
# define BORDER_HH_

# include "point.hh"

class Border
{
  public:

    Border();
    Border(Point& origin, double x1, double x2, double y1, double y2);
    ~Border();

    bool is_inrectangle1(Point& p);
    bool is_inrectangle1(double x, double y);

    bool is_inrectangle2(Point& p);
    bool is_inrectangle2(double x, double y);

    bool is_inborder(Point& p);
    bool is_inborder(double x, double y);

  private:
    Point origin_;
    double x1_;
    double y1_;
    double x2_;
    double y2_;
};

#endif /* !BORDER_HH_ */
