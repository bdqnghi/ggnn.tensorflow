int main()
{
	int n,a[50000],b[50000],i,k,d,e,f;
	scanf("%d",&n);
	for(i=1;i<=n;i++) scanf("%d %d",&(a[i]),&b[i]);
	for(k=1;k<n;k++)
	{
		for(i=1;i<=n-k;i++)
		{
			if(a[i]>a[i+1])
			{
				d=a[i];
				a[i]=a[i+1];
				a[i+1]=d;
				d=b[i];
				b[i]=b[i+1];
				b[i+1]=d;

			}
		}
	}
	d=a[1];
	e=b[1];
    f=1;
	for(i=2;i<=n;i++)
	{
		if(a[i]<=e)
		{
			if(b[i]>e)
			{
				e=b[i];
			}
		}
		else
		{
			printf("no");
			f=0;
			break;
		}
	}
	if(f==1)
	{
		printf("%d %d",d,e);
	}
	return 0;
}