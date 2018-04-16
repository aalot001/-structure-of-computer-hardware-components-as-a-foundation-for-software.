#include <stdio.h>
#include <stdlib.h>

#define ZLEN 5
typedef int zip_dig [ZLEN];

void zincr(zip_dig z);

int main()
{
   zip_dig cmu = { 1, 5, 2, 1, 3};
   int i;
   int *p;
   p = cmu;
   printf("Array: ");
   for (i = 0; i < ZLEN; i++) 	/* print array  */
      printf(" %3d,", cmu[i]);
   printf("\n\n");

   zincr(cmu);			/* Increment elements */

    printf("Array after ++: ");
   for (i = 0; i < ZLEN; i++) 	/* print array  */
      printf(" %3d,", cmu[i]);
   printf("\n\n");
   
   return (0);
}

