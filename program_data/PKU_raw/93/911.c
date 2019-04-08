int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if (a==0)
	{
		if (b==0)
		{
			if (c==0)
				printf("3 5 7\n");
		}
	}
	if (a==0)
	{
		if (b==0)
		{
			if (c!=0)
				printf("3 5\n");
		}
	}
	if (a==0)
	{
		if (b!=0)
		{
			if (c==0)
				printf("3 7\n");
		}
	}
	if (a!=0)
	{
		if (b==0)
		{
			if (c==0)
				printf("5 7\n");
		}
	}
	if (a==0)
	{
		if (b!=0)
		{
			if (c!=0)
				printf("3\n");
		}
	}
	if (a!=0)
	{
		if (b==0)
		{
			if (c!=0)
				printf("5\n");
		}
	}
	if (a!=0)
	{
		if (b!=0)
		{
			if (c==0)
				printf("7\n");
		}
	}
	if (a!=0)
	{
		if (b!=0)
		{
			if (c!=0)
				printf("n\n");
		}
	}

	return 0;
}