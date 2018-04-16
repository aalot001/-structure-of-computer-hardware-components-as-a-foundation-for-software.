#include <stdio.h>
#include <stdlib.h>

/* Ahmed Alotaibi
   3/7/2017
	*/
	
int main()
{
	int x,y,z;
	printf("Enter two numbers for -, *, <<, >>, ^ : ");
	   scanf("%d%d", &x, &y);
		z = x ^ y;
		   printf("\n\tFor ^ numbers = %d\n", z);
		z = x >> y;
		   printf("\n\tFor >> numbers = %d\n", z);
		z = ~ y;
		   printf("\n\tFor ~ numbers = %d\n", z);
		z = x - y;
		   printf("\n\tFor - numbers = %d\n", z);
	
			return 0;
}

