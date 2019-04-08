int main()
{
	int i,j,k,n,e,max,u=0;
	int a[50000],b[50000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	for(k=1;k<=n;k++)
	{
		for(i=0;i<n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				e=a[i+1];
				a[i+1]=a[i];
				a[i]=e;
				e=b[i+1];
				b[i+1]=b[i];
				b[i]=e;
			}
		}
	}
	max=b[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			u=1;
			break;
		}
		else
		{
			if(max<=b[i])
			{
				max=b[i];
			}
		}
	}
	if(u==0)
	{
		printf("%d %d",a[0],max);
	}
	else
	{
		printf("no");
	}
	return 0;
}