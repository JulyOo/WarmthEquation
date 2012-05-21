#ifndef NET_HH_
# define NET_HH_

# include <list>

class Knot;


class Net
{
  public:

    Net (std::list<double>& xpace, std::list<double>& ypace);
    ~Net ();


  private:
    std::list<Knot*> nodes_;
    std::list<double>& xpace_;
    std::list<double>& ypace_;
};

#endif /* !NET_HH_ */
