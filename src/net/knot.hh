#ifndef KNOT_HH_
# define KNOT_HH_

# include <iostream>

# include "../geometry/point.hh"


class Knot
{
  public:

    enum Direction
    {
      UP,
      RIGHT,
      DOWN,
      LEFT
    };

    Knot (double x, double y);
    ~Knot ();

    void set_point (Knot* p, Direction d);
    Knot* get_point (Direction d);

    Point& point_get ();

  private:
    Point p_;
    Knot* up_;
    Knot* right_;
    Knot* down_;
    Knot* left_;
};

std::ostream& operator<< (std::ostream& o, Knot& k);

#endif /* !KNOT_HH_ */
