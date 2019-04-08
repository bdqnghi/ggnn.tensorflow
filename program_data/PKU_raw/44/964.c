void main()
{
	int a[6], i; 
	int reverse(int num);
	for (i=0; i<6; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i=0; i<6; i++)
	{
		if (a[i]<0)
		{
			a[i]=reverse(a[i]);
			printf("%d\n", -a[i]);
		}
		else
		{
			a[i]=reverse(a[i]);
			printf("%d\n", a[i]);
		}

	}
}

int reverse(int a)
{
	int n, b[5], i, j[5], c, t;
	if (a<0)
	a=-a;
	if (a>=10000)
		n=4;
	if (a<10000 && a>=1000)
		n=3;
	if (a<1000 && a>=100)
		n=2;
	if (a<100 && a>=10)
		n=1;
	if (a<10 && a>=0)
		n=0;
	j[0]=1;
	for (i=1; i<=n; i++)
	{
		j[i]=j[i-1]*10;
	}
	b[n]=a/j[n];
	for (i=n-1; i>=0; i--)
	{
		c=a;
		for (t=i+1; t<=n; t++)
		{
			c=c-b[t]*j[t];
		}
		b[i]=c/j[i];
	}
	t=0;
	for (i=0; i<=n; i++)
	{
		t=t+b[i]*j[n-i];
	}
    return (t);
}
