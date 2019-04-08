main()
{
	int m[301];
	int n[301];
	int o[301];
	int a[301][301];
	int i,j,k=0,p,q,r;
	for(i=1;;i++)
	{
		scanf("%d %d",&n[i],&m[i]);
		if(n[i]==0&&m[i]==0)break;
		k++;
	}
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=n[i];j++)
		{
			a[i][j]=j;
		}
	}
	for(i=1;i<=k;i++)
	{
		for(j=0,q=1,p=1;p<n[i];)
		{
			j++;
			if(j==n[i]+1)j=1;
			if(a[i][j]!=0)q++;
			if(q==m[i]+1)
			{
				q=1;
				a[i][j]=0;
				p++;
			}
		}
		for(r=1;r<=n[i];r++)
		{
			o[i]+=a[i][r];
		}
		printf("%d\n",o[i]);
	}
}
