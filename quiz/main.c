#include <stdio.h>
#include <stdlib.h>

/* P4.6 test push    */
/* gcc -o pushtest main.c pushtest.s
   to DBG 
   gcc -g -o pushtest main.c pushtest.s   
   gdb ./pushtest
   start
   s
   l  20
   info r
   s
   s
   l  5
   disp $rsp
   disp $esp
   disp $eax
   disp $edx
then step through
   x/10 0x7fffffffd740	*/

int main()
{
   int x = 19, rv;

   rv = _pushtest(x);

   printf("\n\tx = %d\t return value = %d\n\n", x, rv); 
}


