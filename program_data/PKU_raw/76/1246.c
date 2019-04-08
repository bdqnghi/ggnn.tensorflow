int a[10000],c[50000],b[10000],d[10000],e[10000];
int main()
{
	
	int n,x,y,i,j,p,q,m=0;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
		d[i]=a[i];
		e[i]=b[i];
	}
	 
	for(j=1;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(d[i]<=d[i+1])
			{
				x=d[i+1];
				d[i+1]=d[i];
				d[i]=x;
			}
			if(e[i]>=e[i+1])
			{
				y=e[i+1];
				e[i+1]=e[i];
				e[i]=y;
			}
		}
	}
	p=d[n-1];
	q=e[n-1];
	
	for(i=p;i<q;i++)
	{
		c[i]=0;
	}

	
	for(i=0;i<n;i++)
	{
		for(j=a[i];j<b[i];j++)
		{
			c[j]=j;
		}
	}


	for(i=p;i<q;i++)
	{
		if(c[i]==0)
		{
			m=m+1;
		}
	}
	if(m==0)
	{
		printf("%d %d",p,q);
	}else
	{
		printf("no");
	}

	return 0;
}