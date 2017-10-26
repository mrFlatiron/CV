#include "utils.h"
#include <cstdio>

std::string int_to_string (int num)
{
  char buf[1024];
  sprintf (buf, "%d", num);
  return buf;
}
