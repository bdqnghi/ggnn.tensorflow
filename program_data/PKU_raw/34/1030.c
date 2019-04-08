int main()
{
	int n;
	scanf("%d", &n);
	if(n==1)
	{
		printf("End");
		return 0;
	}
	else
	{
	int a, b;
	a=n;
	int i=1;
	while (a!=1)
	{
		b=a;
		if (a%2!=0)
		{
			a=a*3+1;
			printf("%d*3+1=%d\n", b, a);
		}
		else 
		{
			a=a/2;
			printf("%d/2=%d\n", b, a);
		}
		i++;
	}
	}
	printf("End");
	return 0;
}