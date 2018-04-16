#include <stdio.h>
#include <string.h>
#include <sys/types.h>

int A[1000];

int main(){
	
	A[2000] = 90;
	printf("\n A[200] = %d\n", A[200]);
	return 0;

}

