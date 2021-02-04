#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"

int main(int argc, char* argv[])
{
  char c;
  FILE *from, *to;
  int flipping = (strcmp(argv[1],"-f") == 0);

  from = fopen(argv[2], "r");
  
  if (from == NULL)
  {
    exit(1);
  }

  to = fopen(argv[3],"w");

  if(to == NULL)
    {
     fclose(from);
      exit(1);
    }
  /* file exists, so start reading */
  while ((c = getc(from)) != EOF)
    if(flipping)
      putc(flipChar(c),to);
    else
      putc(c, to);

  fclose(from);
  fclose(to);

  exit(0);
}
