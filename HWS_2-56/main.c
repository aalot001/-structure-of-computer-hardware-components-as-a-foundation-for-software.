int main(){

	int x;
	int n;
	printf("\nX and N are values to examine assembly code\n"
   	"\nEnter X value: 0X");
  	scanf("%X", &x);
   	printf("\n\tyou have entered %X for x", x);
   	printf("\n"
   	"\nEnter N value: 0X");
	scanf("%X", &n);
   	printf("\n\tyou have entered %X for n", n);
   	printf("\n");
   	printf("\n\tAfter looping with given values gives: 0X%X\n\n", loop(x, n));
   	printf("\n");
	return 0;
   
}

/*
To answer the quetion:
A. esi: x
   ebx: n
   edi: result
   edx: mask

B. result: 0x55555555
   mask:   0x80000000

C. mask != 0

D. mask = (unsigned)mask >> (n&0xFF)

E. result ^= x & mask */
