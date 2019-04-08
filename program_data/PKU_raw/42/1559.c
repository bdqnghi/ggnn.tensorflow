int main()
{
	int n,a,b,c,d;
	scanf("%d",&n);
	int z[200000];
	for(a=1;a<=n;a++)
	{
		scanf("%d",&z[a]);
	}
	scanf("%d",&b);
	d=0;
	a=n;
	while(z[a]==b)
	{
		a-=1;
	}
	n=a;
	for(a=1;a<=n;a++)
	{
		if (z[a]!=b)
		{
			if(a<n)
		printf("%d ",z[a]);
			else
	printf("%d",z[a]);
		}
	}
	return 0;
} 