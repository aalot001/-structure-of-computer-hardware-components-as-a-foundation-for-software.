#include <stdio.h>
#include <stdlib.h>

/* p3.20 calculate factorial use do - while loop  */
int fcdw(int n) {
   int x = 1;
   printf("factorial using do-while loop\n");
   do {
       x *= n;
       n = n - 1;
   } while (n > 1);
   return x;
}


