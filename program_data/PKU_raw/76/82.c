int main()
{
	int a,b,e,i,j,m,n;
	int f[num];
	int g[num];
	m=2;
	a=10000;
	b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&(f[i]));
		scanf("%d",&(g[i]));
	}
	for(i=0;i<n;i++)
	{
		if(f[i]<a)
			a=f[i];
		if(g[i]<a)
			a=g[i];
		if(f[i]>b)
			b=f[i];
		if(g[i]>b)
			b=g[i];
	}
	for(j=n-1;j>0;j--)
	{
		for(i=0;i<j;i++)
		{
			if(f[i]>f[i+1])
			{
				e=f[i];
				f[i]=f[i+1];
				f[i+1]=e;
				e=g[i];
				g[i]=g[i+1];
				g[i+1]=e;
			}
		}
	}
	e=0;
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			if(f[i]>g[j])
				e++;
		}
		if(i==e)
			{
			m=3;
			break;
		}
		else
			e=0;
	}
	if(m==2)
	printf("%d %d",a,b);
	else
		printf("no");
   return 0;
}