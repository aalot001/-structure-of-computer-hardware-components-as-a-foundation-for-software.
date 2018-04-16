

int fc(int n);

int main(){

	int n;
	int x;
	printf("Enter a number to find its factorial: ");
	scanf("%d", &n);	
	x = fc(n);
	printf("The result of entered number = ", n, x);

	return 0;
}
