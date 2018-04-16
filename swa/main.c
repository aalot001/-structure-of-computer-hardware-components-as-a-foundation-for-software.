#include <stdio.h>

int main(){

	int x, y;

	printf("Enter two integers: ");
	scanf("%d%d", &x, &y);

	printf("\n\tBefore swapping x= %d and y = %d", x, y);
	x = x ^ y;
	y = x ^ y;
	x = x ^ y;
	printf("\n\tAfter swapping x= %d and y = %d\n", x, y);

	return 0;

}
