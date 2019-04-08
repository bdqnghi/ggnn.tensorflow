void main()
{
	int a[1000],b[1000],c[1000],index[1000];
	int n,i,temp,j,t,k,d=0;
	scanf ("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		c[i]=a[i];
	}
	for (j=1;j<=n-1;j++)
	{
		for (i=0;i<n-j;i++)
		{
			if(c[i]>c[i+1])
			{
				t=c[i];
				c[i]=c[i+1];
				c[i+1]=t;
			}
		}
	}
	j=0;
	for (i=0;i<=n;i++)
	{
		if(c[i]==c[i+1])
		{
			temp=0;
		}
		else
		{
			temp=1;
		}
		if(temp!=0)
		{
			b[j]=c[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		for(k=0;k<n;k++)
		{
			if(a[k]==b[i])
			{
				index[d]=k;
				d++;
				break;
			}
		}
	}
	for (j=1;j<=d-1;j++)
	{
		for(i=0;i<d-j;i++)
		{
			if(index[i]>index[i+1])
			{
				t=index[i];
				index[i]=index[i+1];
				index[i+1]=t;
			}
		}
	}
	for(i=0;i<d-1;i++)
	{
		printf("%d,",a[index[i]]);
	}
	printf("%d",a[index[d-1]]);
}
