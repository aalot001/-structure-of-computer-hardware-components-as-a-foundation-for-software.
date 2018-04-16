#include <stdio.h>

int main(){

	int first, second, *p, *q, sum;

	printf("Enter two integers to add: ");
	scanf("%d%d", &first, &second);
	p = &first;
	q = &second;
	sum = *p + *q;
	printf("\n\tSum of entered integers = %d", sum);

	return 0;

}
