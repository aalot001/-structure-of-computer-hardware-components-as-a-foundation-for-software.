#include <stdio.h>
#include <stdlib.h>
/* HW 2.64 if any odd-bits is set, return 1, else 0 */

int any_odd_one(unsigned x);
void printbin(int x, int cnt);

main()
{
   unsigned xv;
   printf("\nChp 2, HW64 if any odd-bits is set, return 1, else 0 \n\n");
   printf("Enter a value in hex: x = 0x");
   scanf("%x", &xv);
   
   printf("\nYou enterd x = 0X%.8X  in binary  \n", xv);
   printbin( xv, 32);
   printf("\n\n");

   if (any_odd_one( xv ))
      printf("\nSome odd-bits are set to 1\n\n");
   else
      printf("\nNo odd-bit is set to 1\n\n");
	
}

int any_odd_one(unsigned x) {
   unsigned rv = 0, i;

    for (i =32; i >= 0; i--){

	rv = rv & 1 ? x >> i : x << i;

	return (rv);
     }
}

void printbin(int x, int cnt)
{                             
   int i;
   char buf[33]= {0};		
   
   for (i = 0; i < cnt; i++) {
	if (cnt > 32 || cnt < 1){
	      cnt = 32;
       }
      buf[cnt-1-i] = ((x>>i) & 0x1) ? '1' : '0';
   printf("%s", buf);
    }
}

