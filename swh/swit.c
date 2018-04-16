#include <stdio.h>
#include <stdlib.h>
/* Chap 3,  do while call switch-st	*/ 

int switchSt(int x, int n){
	int y;
	do{
	n -=100;
	}while(n > 6);
	switch(n){
		case 0:
			y = n;
			y = x * 3;
			y = (x * 3) * 4 + x;
			break;
		case 2:
			y = x + 10;
			break;
		case 3:
			y = x + 11;
			
		case 4:
			y = x;

		case 6:
			y = y * y;
			break;
		default:
			y = 0;
	}
	return y;
}
