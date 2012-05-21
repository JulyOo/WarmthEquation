#ifndef KNOT_HH_
# define KNOT_HH_

class Point;

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

    void set_point (Point* p, Direction d);
    Point* get_point (Direction d);

    Point& point_get ();

  private:
    Point p_;
    Point* up_;
    Point* right_;
    Point* down_;
    Point* left_;
};

#endif /* !KNOT_HH_ */
