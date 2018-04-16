#include <stdio.h>
#include <stdlib.h>

/* .s and .c  Control -: conditional branch  */

int test(int x, int y)
{
  int val;
  if (x != y) {
      if (y < x)
         val = y - x;
      else
         val = x + y;
  } else if (x > 5)
      val = y + x;

   return val;
}

