void main()
{
	int m,n,a[8][8],i,j,q[1][8],k[8],z=0,p[8],finish=0;
		scanf("%d,%d",&m,&n);
		for(i=0;i<=m-1;i++)
			k[i]=0;
	for(i=0;i<=m-1;i++)
		for(j=0;j<=n-1;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<=m-1;i++)
	{
		q[0][i]=a[i][0];
		p[i]=0;
			for(j=1;j<=n-1;j++)
			if(a[i][j]>q[0][i])
			{q[0][i]=a[i][j];
			p[i]=j;}
	}
	for(j=0;j<=m-1;j++)
	{
		for(i=0;i<=m-1;i++)
		{
			if(q[0][j]<=a[i][p[j]])
				k[j]=k[j]+1;
		}
		if(k[j]==m)
		{
			printf("%d+%d\n",j,p[j]);
			finish=1;
		}
	}
	if (!finish)
			printf("No\n");
}
