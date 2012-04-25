#ifndef NET_HH_
# define NET_HH_

# include <list>

class Net
{
  public :
    Net(char* filename);
    ~Net();

  private :

    class Knot
    {
      public :
        Knot(unsigned int x, unsigned int y);
      private :
        unsigned int x_;
        unsigned int y_;
        std::list<Knot*> neighb_;
    };

    std::list<Knot*> knots_;
};

#endif /* !NET_HH_ */
