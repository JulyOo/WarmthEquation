#ifndef PACEMAKER_HH_
# define PACEMAKER_HH_

# include <list>

class Pacemaker
{
  public:
    Pacemaker (std::list<Point*>& points, Border& b);
    ~Pacemaker ();

  private:
    std::list<double> xs_;
    std::list<double> ys_;
};

#endif /* !PACEMAKER_HH_ */
