#include "net.hh"
#include "knot.hh"
#include "../geometry/border.hh"

Net::Net (std::list<double>& xpace, std::list<double>& ypace)
  : nodes_ (std::list<Knot*>()),
    xpace_ (xpace),
    ypace_ (ypace)
{
}

Net::~Net ()
{
  for (std::list<Knot*>::iterator it = nodes_.begin ();
       it != nodes_.end (); ++it)
    delete *it;
}

void Net::compute_net (Border& b)
{
  std::list<double>::iterator xit = xpace_.begin ();
  std::list<double>::iterator yit = ypace_.begin ();

  std::list<Knot*>::iterator up_node;
  bool firstline = true;

  for (; yit != ypace_.end (); ++yit)
  {
    std::list<Knot*>::iterator head;

    nodes_.push_back (new Knot (*xit, *yit));

    head = nodes_.end ();

    for (xit = ++(xpace_.begin ()); xit != xpace_.end (); ++xit)
    {
      if (!b.is_inborder(*xit, *yit))
        continue;

      std::list<Knot*>::iterator current = nodes_.end ();

      nodes_.push_back (new Knot (*xit, *yit));

      (*current)->set_point (*nodes_.end (), Knot::RIGHT);
      (*nodes_.end ())->set_point (*current, Knot::LEFT);

      if (!firstline)
      {
        (*nodes_.end ())->set_point (*up_node, Knot::UP);
        (*up_node)->set_point (*nodes_.end (), Knot::DOWN);
        ++up_node;
      }

    }

    up_node = head;
    firstline = false;
  }
}

void Net::print_net (std::ostream& o)
{
  for (std::list<Knot*>::iterator it = nodes_.begin ();
       it != nodes_.end (); ++it)
  {
    o << **it;
  }
}
