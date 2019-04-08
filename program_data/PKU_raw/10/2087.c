int main()
{
	int m,n,i,j,k,c;
	scanf("%d",&n);
	int *a=(int *)malloc(n*sizeof(int));
	int *b=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	b[n-1]=1;
	for(i=n-2;i>=0;i--)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>=a[j]&&b[j]>b[i])
			{
				b[i]=b[j];
			}
		}
		b[i]++;
		if(i==0)
		{break;}
	}
	k=0;
	c=b[0];
	for(i=1;i<n;i++)
	{
		if(b[i]>c)
		{
			k=i;
			c=b[i];
		}
	}
	printf("%d",b[k]);
}