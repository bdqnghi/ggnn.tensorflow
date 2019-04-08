int main()
{
	int m,n,i,min,max,a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
	}
    for(m=n-1;m>0;m--)
	{
		for(i=0;i<m;i++)
		{
			if(a[i]>a[i+1])
			{
				min=a[i+1];
				a[i+1]=a[i];
				a[i]=min;
				min=b[i+1];
				b[i+1]=b[i];
				b[i]=min;
			}
		}
	}
	for(i=0;i<n-1;i++)
	{
		if(a[i+1]>b[i])
		{
		    printf("no\n");
		    break;
		}
		else 
		{
			if(b[i]>=b[i+1])
			{
				max=b[i];
				b[i]=b[i+1];
				b[i+1]=max;
			}
		}
	}
    if(i==n-1)
	{
		printf("%d %d\n",a[0],max);
	}
	return 0;
}