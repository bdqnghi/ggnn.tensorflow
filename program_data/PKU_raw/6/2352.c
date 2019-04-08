void main()
{
	int k,m,n,a[110][110],i,j,l,s=0;
	scanf("%d",&k);
	for(i=1;i<=k;i++)
	{
		scanf("%d %d",&m,&n);
		for(j=1;j<=m;j++)
			for(l=1;l<=n;l++)
				scanf("%d",&a[j][l]);
		if(m==1) for(j=1;j<=n;j++) s=s+a[1][j];
		else if(n==1) for(j=i;j<=m;j++) s=s+a[j][1];
		else
		{for(j=1;j<=m;j++)
		{s=s+a[j][1]+a[j][n];a[j][1]=0;a[j][n]=0;}
		for(j=2;j<n;j++)
		{s=s+a[1][j]+a[m][j];a[1][j]=0;a[m][j]=0;}}
		printf("%d\n",s);
		s=0;
	}
}