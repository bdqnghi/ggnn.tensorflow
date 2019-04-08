void main()
{
	int Fibonacci(int n);
	int n, a[100], i;
	scanf("%d\n", &n);
	for(i=0; i<n; i++)
		scanf("%d", &a[i]);
	for(i=0; i<n; i++)
		printf("%d\n", Fibonacci(a[i]));
}
int Fibonacci(int n)
{
	int i, a[20];
	a[0]=1;
	a[1]=1;
	for(i=2; i<n; i++)
		a[i]=a[i-2]+a[i-1];
	return (a[n-1]);
}