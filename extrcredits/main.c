#include <stdio.h>
#include <stdlib.h>
/* Extre Credits; main function to revers bits */

int reverbits(unsigned x);

int main()
{
   int xv=2;
   int rv;
   printf("\nEnter value for rever-bits: ");
   scanf("%d", &xv);
   rv = reverbits(xv); 
   printf(" | %d = %d\n\n",xv,rv);  
}
