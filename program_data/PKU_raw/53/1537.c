int main()
{
	int n,i,j=0,k;
	int a[400],b[400],c[400];
	for(i=0;i<400;i++)
	{
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=1;
	}
	for(i=0;i<n;i++)
	{
		if(b[i])
		{
			c[j]=a[i];
			for(k=i;k<n;k++)
			{
				if(a[k]==c[j])
					b[k]=0;
			}
			j=j+1;
		}
	}
	if(j>1)
	{
		for(i=0;i<j-1;i++)
			printf("%d,",c[i]);
	}
	printf("%d",c[j-1]);
	return 0;
}