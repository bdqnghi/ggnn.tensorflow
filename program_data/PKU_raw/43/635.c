void main()
{
	int i,j,n,sqrti,m=0,a[10000];
	scanf("%d",&n);
	for(i=3;i<=n;i+=2)
	{
		sqrti=(int)sqrt(i);
		for(j=3;j<=sqrti;j+=2)
		{
			if(i%j==0)
			{
				break;
			}
		}
		if(j>sqrti)
		{
			a[m]=i;
			m++;
		}
	}
	for(i=0;i<=m;i++)
	{
		for(j=i;j<=m;j++)
			if(n==a[i]+a[j])
			{
				printf("%d %d\n",a[i],a[j]);
			}
	}
}

