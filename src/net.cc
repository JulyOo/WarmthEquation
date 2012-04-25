#include "net.hh"

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

Net::Knot::Knot(int x, int y)
  : x_  (x),
    y_  (y)
{
}

Net::Net(char* filename)
{
  char* buff[255] = { 0 };
  int read = 0;
  int fd = open(filename, O_RDONLY);
  unsigned int line = 0;
  unsigned int column = 0;

  while ((read = read(fd, buff, 255)))
  {
    for (int i = 0; i < read; ++i, ++column)
    {
      if (buff[i] == '\n')
      {
        ++line;
        column = 0;
      }
      else if (buff[i] && buff[i] != ' ' && buff[i] != '\t')
      {
        knots_.insert(new Knot(column, line));
        ++column;
      }
      else
        ++column;
    }
  }
}
