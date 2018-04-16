#include <stdio.h>
#include <stdlib.h>
/* Chap 3,  switch statement	*/ 

int switch_prob(int x, int n)
{
	int result = x;
	switch(n)
	{
	case 50:
	case 52:
		result *= 3;
	case 53:
		result *= result;
	case 54:
		result=(result + 10);
		return result;
	case 55:
		result = result >> 2;
		break;
	default:
		result= result + (x + x);
		return result;
	}
	return result;
}
