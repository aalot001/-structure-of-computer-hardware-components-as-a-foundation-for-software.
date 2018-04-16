#include <stdio.h>
#include <stdlib.h>


int reverbits(unsigned x)
{
   int val = 0;
   int i;
   for (i= 32; i != val; i--)
   {
     val = (val << 1) | (x & 0x1);
      x = x >> 1;
   }
   return val;
}









