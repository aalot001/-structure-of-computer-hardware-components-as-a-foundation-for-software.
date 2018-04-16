int absdiff (int x, int y);

int main()
{
	int x, y, z;

	printf("\n\tEnter two numbers: ");
	scanf("%d %d", &x, &y);
	
	z = xmax(x, y);
	printf(" | %d > %d | = %d\n\n",x, y, z);

	return 0;
}

