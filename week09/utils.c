#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"

int approxEqual(float el, float refval, float tolerance)
{
  return (refval - tolerance <= el && el <= refval + tolerance);
}

char flipChar(char c)
{
  if('a' <= c && c <= 'z')
    return 'z' - c + 'a';
  else if('A' <= c && c <= 'Z')
    return 'Z' - c + 'A';
  else if('0' <= c && c <= '9')
    return '0' - c + '9';

  return c;
}
