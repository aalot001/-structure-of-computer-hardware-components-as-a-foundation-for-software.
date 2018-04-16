

int fcdw(int n);

int main(){

	int n;
	int x;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &n);	
	x = fcdw(n);
	printf("The result of entered number = ", n, x);

	return 0;
}
