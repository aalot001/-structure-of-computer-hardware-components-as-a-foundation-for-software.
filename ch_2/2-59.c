#include <stdio.h>


int main()
{
	unsigned int a =0, b=0, c=0;

	printf("Enter ls value for X: 0X");
	scanf("%x", &b);
	printf("Enter 2nd value for Y: 0X");
	scanf("%x", &c);
	printf("\nYou enterd:\tx = 0X%X\n\t\ty = 0X%X\n\n", b, c);
   	printf("\n");
    	printf(" X-Y  %X\n",b & 0x000000FF | c & 0xFFFFFF00);

}

