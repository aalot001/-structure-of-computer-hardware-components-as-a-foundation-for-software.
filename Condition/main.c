#include <stdio.h>
#include <stdlib.h>


int absdiff (int x, int y);

int main()
{
	int x, y, z;

	printf("\n\tEnter two numbers to find the biggest: ");
	scanf("%d %d", &x, &y);
	
	z = absdiff(x, y);
	printf(" | %d - %d | = %d\n\n",x, y, z);

	return 0;
}

