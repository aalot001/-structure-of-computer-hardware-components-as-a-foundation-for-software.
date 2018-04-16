#include <stdio.h>
#include <stdlib.h>

/* Ahmed alotaibi
   2/15/2017 
   A very simple program that uses bitwise 
   to replcae chars with Hex 0X  */

int replace_byte(unsigned x, unsigned char b,int i, int y)
{
	return ~(~x | (0xFF << (y * i))) | (b << (y * i));

}
	     
int main ()
{
   unsigned int i = 3;
   unsigned int x;
   unsigned int y = 8;
   unsigned char b = 0xAB;
   	printf("Enter x (4 bytes value) in hex: 0x");
   	scanf("%X", &x);
	printf("Which byte (0-3) should be replaced i = ");
	scanf("%x", &i);
	printf("\nYou enterd:\tx = 0X%X  \n\t\ti = %X\n",x, i);
	printf("\n\t Char to replcae = 0xAB \n");
   	printf("\n\tPlace x in bytes of i gives: 0X%X\n\n", replace_byte(x,b,i,y));
    return 0;
}


