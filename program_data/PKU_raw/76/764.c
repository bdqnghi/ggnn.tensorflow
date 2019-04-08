void main()
{
	int i,n,min,max,a,b,j;
	int c[10001],w[10001];
	for(i=0;i<10001;i++)
	{
		c[i]=0;
		w[i]=0;
	}
	min=10001;
	max=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		if(min>a)
		{
			min=a;
		}
		if(max<b)
		{
			max=b;
		}
		for(j=a;j<=b;j++)
		{
			if(j==a || j==b)
			{
				if(w[j]==0 && c[j]==0)
				{
					c[j]=0;
					w[j]=1;
				}
				else
					c[j]=1;
			}
			else
				c[j]=1;
		}
	}
	for(i=min;i<=max;i++)
	{
		if(c[i]==0)
		{
			if(i==min || i==max)
			{
			}
			else
				break;
		}
	}
	if(i<max+1)
		printf("no");
	if(i==max+1)
		printf("%d %d",min,max);
}

