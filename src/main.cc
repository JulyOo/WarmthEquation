#include "geometry/border.hh"
#include "net/net.hh"

#include <iostream>
#include <list>
#include <cstring>


int main (int argc, char** argv)
{
  Border* b;
  bool print = false;

  for (int i = 1; i < argc; ++i)
  {
    if (!strcmp(argv[i], "-p"))
      print = true;
  }

  b = new Border();

  double x[] = { 0, 1.2, 1.3, 3, 4, 5, 6.7, 8, 9, 10, 11 };


  std::list<double> xs (x, x + 11);
  std::list<double> ys (x, x + 9);

  Net mesh (xs, ys);

  mesh.compute_net (*b);


  if (print)
    mesh.print_net (std::cout);
  delete b;
}
