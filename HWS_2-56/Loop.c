#include <stdio.h>
#include <stdlib.h>

/* assembly in C */
/* loop changes every nth bit from 1 to 0 and every 0 to 1 ?  */
int loop(int x, int n)
{
   int res, msk;
   res = -1;
   for (msk = 1; msk != 0; msk = (unsigned) msk >> (n&0xFF))
      res ^= (x & msk);
   
   return res;

}

