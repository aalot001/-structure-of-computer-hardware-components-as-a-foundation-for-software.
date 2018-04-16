#include <stdio.h>
#include <stdlib.h>



int main()
{
	int v1, v2;

	printf("Enter two value to convert : \n");
	scanf("%d%d", &v1, &v2);
	printf("\n\t\t%p + %p = %p ", v1, v2, v1+v2);
	printf("\n\n");

	return 0;
}

