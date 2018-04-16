#include <stdio.h>

/* Ahmed Alotaibi
   1/27/2017
A program that asks for two numbers and print the sum */

int main()
{
	int x,y,z;
	printf("Type two numbers to find the sum : ");
	   scanf("%d%d", &x, &y);
		z = x + y;
		   printf("The sum of provided numbers = %d\n", z);
			return 0;
}

