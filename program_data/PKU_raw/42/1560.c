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
		if(z[a]==b)
		{
		    for(c=a;c<n;c++)
			{
				z[c]=z[c+1];
			}
			d=d+1;
			a-=1;
		}
	}
	for(a=1;a<=n-d;a++)
	{
		if (a<n-d)
		printf("%d ",z[a]);
		else
        printf("%d",z[a]);
	}
	return 0;
} 