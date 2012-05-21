#include "net.hh"

Net::Net (std::list<double>& xpace, std::list<double>& ypace)
  : nodes_ (std::list()),
    xpace_ (xpace),
    ypace_ (ypace)
{
}
