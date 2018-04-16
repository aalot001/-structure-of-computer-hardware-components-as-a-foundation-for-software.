#include <stdio.h>

int arith1(x, y, z){

	int t1 = x + y;
	int t2 = z + t1;
	int t3 = x + 4;
	int t4 = y * 48;
	int t5 = t3 + t4;
	int rval = t2* t5;
	return rval;

}

