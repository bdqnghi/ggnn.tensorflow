int main()
{
	int a[50000],b[50000],c[10001];
	int n,i,j,k,s=0,p,q,l,u;
	int x=10000,d=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&(a[i]),&(b[i]));
	}
	for(i=0;i<=10000;i++)
	{
		c[i]=1;
	}
	for(i=0;i<n;i++)
	{
		k=b[i];
		l=a[i];
		for(j=l+1;j<=k;j++)
		{
			c[j]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<x)
		{
			x=a[i];
		}
	}
	c[x]=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>d)
		{
			d=b[i];
		}
	}
	for(i=x;i<=d;i++)
	{
		if(c[i]==1)
		{
			s++;
		}
	}
	if(n>=3)
	{
		if(s>0)
		{
			printf("no");
		}
	    if(s==0)
		{
		    printf("%d %d",x,d);
		}
	}
	if(n<3)
	{
		printf("no");
	}
	return 0;
}
	

	
