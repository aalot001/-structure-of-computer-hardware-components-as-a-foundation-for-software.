#include <stdio.h>
#include <stdlib.h>

void show_bytes(unsigned char *byte_pointer, int len);
void show_int(int a);
void show_float(float b);
void show_pointer(void *c);
void show_long(long d);


typedef unsigned char *byte_pointer;

int main(void)
{
    printf("A- Showing bytes for value ( 90 ):\n");
	show_int(90);
    printf("\n");
    printf("B- Showing bytes for value ( -90 ):\n");
	show_int( -90 );
    printf("\n");
    printf("C- Showing bytes for value as float ( 90.00 ):\n");
	show_float(90.00);
    printf("\n");
    printf("D- Showing bytes for value as pointer ( 90 ):\n");
	show_pointer(90);
    printf("E- Showing bytes for value as long ( 9000000000 ):\n");
	show_long(9000000000);
    printf("F- Showing bytes for value as short ( 90 ):\n");
	show_short(90);
    printf("G- Showing bytes for value as double ( 90.00):\n");
	show_double(90.00);
    
}

void show_bytes( byte_pointer start, int len )
{
	int i;
	for( i=0; i<len; i++ )
		printf("%p\t0x%.2x\n", start+i, start[i]);
	printf( "\n" );
}

void show_int( int x )
{
	show_bytes( (byte_pointer)&x, sizeof(int) );
}

void show_float( float x )
{
	show_bytes( (byte_pointer)&x, sizeof(float));
}

void show_pointer( void *x )
{
	show_bytes( (byte_pointer) &x, sizeof(void *));
}

void show_long( long x)
{
	show_bytes( (byte_pointer) &x, sizeof(long));
}
void show_short(short x)
{
	show_bytes( (byte_pointer) &x, sizeof(short));
}
void show_double(double x)
{
	show_bytes( (byte_pointer) &x, sizeof(short));
}

