int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n/100;
	b=n/10-n/100*10;
	c=n-n/100*100-(n/10-n/100*10)*10;
	
	if (a!=0)
	{
		printf("%d\n",a);
	}
	else
		{
		printf("0\n");
	}

	if (b>=5)
	{
		printf("%d\n",b/5);
		b=b-5;
	}
	else 
	{
		printf("0\n");
	}
	if (b>=2 && b<5)
	{
		printf("%d\n",b/2);
		b=b-2;
	}
	else 
	{
		printf("0\n");
	}
	if (b==1)
	{
		printf("%d\n",b);
	}
	else 
	{
		printf("0\n");
	}
	if (c>=5)
	{
		printf("%d\n",c/5);
		c=c-5;
	}
	else 
	{
		printf("0\n");
	}
	if (c>=1 && c<5)
	{
		printf("%d\n",c);
	}
	else 
	{
		printf("0\n");
	}

	return 0;
}

