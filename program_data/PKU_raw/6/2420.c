void main()
{
	int k,m,n,a[100][100],i,j,s,t;
	scanf("%d",&k);
		for(t=0;t<k;t++)
		{
			s=0;
	
		scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}	if(m==1&&n==1)
	{
		printf("%d",a[0][0]);continue;
	}
	for(j=0;j<n;j++)
	{
		s=s+*(a[0]+j);
		s=s+*(a[m-1]+j);
	}
	for(i=0;i<m;i++)
	{
		s=s+*(a[i]+0);
		s=s+*(a[i]+n-1);
	}
	s=s-a[0][0]-a[m-1][0]-a[0][n-1]-a[m-1][n-1];
	printf("%d\n",s);
		}
}
