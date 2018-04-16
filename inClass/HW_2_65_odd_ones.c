#include <stdio.h>
#include <stdlib.h>
/* HW 2.65 if odd 1's in a word return 1, else 0 */

int odd_ones(unsigned x);

main()
{
   unsigned xv, rv;
   printf("\nChp 2, HW65, if odd 1's in a word return 1, else 0 \n\n");
   printf("Enter a value in hex: x = 0x");
   scanf("%x", &xv);
   
   printf("\n\n");

   if (odd_ones( xv ))
      printf("There are odd number of ones in 0X%X\n\n", xv);
   else
      printf("There are even number of ones in 0X%X\n\n", xv);
}

int odd_ones(unsigned x) {
   int i;
   unsigned b16, b8, b4, b2, b1;
   b16 = (x >> 16) ^ x;		
   b8 = (x >> 8) ^ x;
   b4 = (x >> 4) ^ x;
   b2 = (x >> 2) ^ x;
   return b1 & 1;
}
