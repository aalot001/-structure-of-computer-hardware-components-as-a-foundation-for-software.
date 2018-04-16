#include <stdio.h>
#include <stdlib.h>

int decode2(int x, int y, int z);

int main(){
	int x;
	int y;
	int z;
	printf("\nX Y and Z are values to examine assembly code\n"
   	"\nEnter X value: ");
  	scanf("%X", &x);
   	printf("\n\tyou have entered %X for x", x);
   	printf("\n"
   	"\nEnter y value: ");
	scanf("%X", &y);
   	printf("\n\tyou have entered %X for y", y);
   	printf("\n"
	"\nEnter z value: ");
	scanf("%X", &z);
	printf("\n\tyou have entered %X for z", z);
   	printf("\n\tResult after given values gives: %X\n\n", decode2(x, y, z));
   	printf("\n");
	return 0;
   
}
