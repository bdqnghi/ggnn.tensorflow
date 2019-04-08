
int main()
{
	int n, i;
	i=1;
	scanf("%d", &n);
	while(i<=n)
	{
		int x, k;
		float sum, c, a, b;
		scanf("%d", &x);
		a=1;
		b=2;
		k=1;
		sum=0;
		c=2;
		while(k<=x)
		{
			sum=sum+c;
			b=a+b;
			a=-a+b;
			c=b/a;
			k=k+1;
		}
		printf("%.3f\n", sum);
		i=i+1;
	}
	return 0;
}