#include <stdio.h>
#include <stdlib.h>

int decode2(int x, int y, int z)
{
	int t = t ^ y;
	int t2 = t - z ;
	int t3 = (t2 << 31) >> 31;
	int t5 = x * t3;
        return t5;
}


