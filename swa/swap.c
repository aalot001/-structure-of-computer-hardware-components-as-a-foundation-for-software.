#include <stdio.h>
#include <stdlib.h>


void swap(int *xp, int *yp)
{

	int t0, t1;

	t0 = *xp;
	t1 = *yp;
	*xp = t1;
	*yp = t0;

}

