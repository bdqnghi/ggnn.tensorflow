main()
{
	int i,j,m1,n1,m2,n2,p,q,a[100][100],b[100][100],answer[100][100];
	scanf("%d %d",&m1,&n1);
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	scanf("%d %d",&m2,&n2);
	for(i=0;i<m2;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			answer[i][j]=0;
			for(p=0;p<n1;p++)
			{
				answer[i][j]=answer[i][j]+a[i][p]*b[p][j];
			}
		}
	}
	for(i=0;i<m1;i++)
	{
		for(j=0;j<n2;j++)
		{
			if(j==0&&j!=n2-1)
				printf("%d",answer[i][j]);
			else if(j==n2-1&&j!=0)
				printf(" %d\n",answer[i][j]);
			else if(j==0&&j==n2-1)
				printf("%d\n",answer[i][j]);
			else printf(" %d",answer[i][j]);
		}
	}
}