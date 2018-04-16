#include <stdio.h>


int rotate_left(unsigned x, int n, int i)
{
        int shift_val = sizeof(x) >> i;
        int xright  = (x >> (shift_val - n));
        int xleft = x << n;
        return xright + xleft;
}

int main()
{
   unsigned int i = 3;
   unsigned int n;
   unsigned int x;
   	printf("\nEnter x (4 bytes value) in hex: 0x");
   	scanf("%X", &x);
	printf("\nWhich bits (0-10) should be used with shift  = ");
	scanf("%x", &n);
	printf("\nYou enterd:\tx = 0X%X  \n\t\trotate of bits = %X\n",x,n);
   	printf("\n\tAfter rotation x with given bits gives: 0X%X\n\n", rotate_left(x, n, i));
    return 0;
}

