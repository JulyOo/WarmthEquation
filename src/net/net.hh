#ifndef NET_HH_
# define NET_HH_

# include <list>
# include <iostream>

class Knot;
class Border;

class Net
{
  public:

    Net (std::list<double>& xpace, std::list<double>& ypace);
    ~Net ();

    void compute_net (Border& b);

    void print_net (std::ostream& o);

  private:
    std::list<Knot*> nodes_;
    std::list<double>& xpace_;
    std::list<double>& ypace_;
};

#endif /* !NET_HH_ */
