#include "warmth-source.hh"

double warmth_source (double x, double y)
{
  return ((x - y) > 0  ? x - y : 0);
}
