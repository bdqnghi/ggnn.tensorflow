int main()
{
	int Fibonacci(int n);int n,i,a[20];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i-1]);
	for(i=1;i<=n;i++)
		printf("%d\n",Fibonacci(a[i-1]));
	return 0;
}

int Fibonacci(int n)
{
	int a;
	if(n==1) a=1;
	else
	if(n==2) a=1;
	else
	a=Fibonacci(n-1)+Fibonacci(n-2);
	return(a);
}