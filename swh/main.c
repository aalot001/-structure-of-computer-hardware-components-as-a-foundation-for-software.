#include <stdio.h>
#include <stdlib.h>
/* Chap 3,  do while call switch-st	*/ 

int switchSt(int x, int n);

int main()
{
   int res, nv;
   int xv = 9;
   printf("\nChp 3 - switch statement \n\n");
   do {
      printf("Enter case number  100 to 106  (0 to quit): ");
      scanf("%d", &nv);

      res = switchSt(xv, nv);

      printf("\n\t case number: %d\tcase result: %d\n\n", nv, res);
   } while (nv);

   return 0;
}


