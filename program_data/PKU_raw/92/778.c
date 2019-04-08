void main()
{
	int n,a[1002],b[1002],i,j,k,l,max=-200001,m=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]>a[i]) 
			{
				l=a[i];
				a[i]=a[j];
				a[j]=l;
			}
			if(b[j]>b[i]) 
			{
				l=b[i];
				b[i]=b[j];
				b[j]=l;
			}
		}
	}
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]>b[i]) m=m+200;
			else if(a[i]<b[i]) m=m-200;
		}
		if(m>max) max=m;
		for(i=n;i>=1;i--) a[i+1]=a[i];
		a[1]=a[n+1];
		m=0;
	}
	printf("%d",max);max=-200001;
	for(;;)
	{
	scanf("%d",&n);
	if(n==0) break;
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		scanf("%d",&b[i]);
	for(i=1;i<=n-1;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(a[j]>a[i]) 
			{
				l=a[i];
				a[i]=a[j];
				a[j]=l;
			}
			if(b[j]>b[i]) 
			{
				l=b[i];
				b[i]=b[j];
				b[j]=l;
			}
		}
	}
	for(j=1;j<=n;j++)
	{
		for(i=1;i<=n;i++)
		{
			if(a[i]>b[i]) m=m+200;
			else if(a[i]<b[i]) m=m-200;
		}
		if(m>max) max=m;
		for(i=n;i>=1;i--) a[i+1]=a[i];
		a[1]=a[n+1];
		m=0;
	}
	printf("\n%d",max);max=-200001;
	}
}

