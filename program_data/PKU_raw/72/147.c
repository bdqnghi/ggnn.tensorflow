void main()
{
	int m,n,i,j,k;
	int s[20][20];
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&s[i][j]);
	}
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(i==0&&j==0)
			{
				if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j+1])
					printf("%d %d\n",i,j);
			}
			else if(i==0&&j<n-1)
			{
				if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j+1]&&s[i][j]>=s[i][j-1])
					printf("%d %d\n",i,j);
			}
			else if(i==0&&j==n-1)
			{
				if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j-1])
					printf("%d %d\n",i,j);
			}
			else if(i<m-1&&j==0)
			{
				if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j+1]&&s[i][j]>=s[i-1][j])
					printf("%d %d\n",i,j);
			}
			else if(i<m-1&&j<n-1)
			{
				if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j-1]&&s[i][j]>=s[i-1][j]&&s[i][j]>=s[i][j+1])
					printf("%d %d\n",i,j);
			}
			else if(i<m-1&&j==n-1)
			{
				if(s[i][j]>=s[i+1][j]&&s[i][j]>=s[i][j-1]&&s[i][j]>=s[i-1][j])
					printf("%d %d\n",i,j);
			}
			else if(i==m-1&&n==0)
			{
				if(s[i][j]>=s[i-1][j]&&s[i][j]>=s[i][j+1])
					printf("%d %d\n",i,j);
			}
			else if(i==m-1&&j<n-1)
			{
				if(s[i][j]>=s[i-1][j]&&s[i][j]>=s[i][j+1]&&s[i][j]>=s[i][j-1])
					printf("%d %d\n",i,j);
			}
			else if(i==m-1&&j==n-1)
			{
				if(s[i][j]>=s[i-1][j]&&s[i][j]>=s[i][j-1])
					printf("%d %d\n",i,j);
			}
}


		
