main()
{
	int m,n,k;
	int count;
	while(scanf("%d %d",&n,&m),m!=0&&n!=0)
	{
		int a[300][2];
		k=0;
		count=0;
		int x=1;
		for(int i=0;i<n;i++)
		{
			a[i][0]=i+1;
			a[i][1]=1;
		}
		while(x!=n)
		{
			if(a[k][1]==1)
			{
				count++;
			}
			if(count==m)
			{
				a[k][1]=0;
				count=0;
				x++;
			}
			k++;
			if(k>=n)
				k=0;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i][1]==1)
			{
				printf("%d\n",a[i][0]);
				break;
			}
		}
	}
}