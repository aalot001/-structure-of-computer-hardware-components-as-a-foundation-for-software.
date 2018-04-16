#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>
/* Ahmed Alotaibi: 
   Homework 8.11 */

int main(){

	int i;
	for (i = 0; i < 2; i++)
		fork();
	printf("hello\n");
	wait(1, NULL, 0);

}


