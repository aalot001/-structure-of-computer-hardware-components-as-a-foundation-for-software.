#include <stdio.h>
#include <stdlib.h>
/* Chap 3,  for HW 3.59  do while call switch-st	*/ 

int switch_prob(int x, int n);

int main()
{
   int res, nv;
   int xv = 9;
   printf("\nChp 3 - switch statement \n\n");
   do {
      printf("Enter case number  50 to 55  (0 to quit): ");
      scanf("%d", &nv);

      res = switch_prob(xv, nv);

      printf("\n\t case number: %d\tcase result: %d\n\n", nv, res);
   } while (nv);

   return 0;
}

