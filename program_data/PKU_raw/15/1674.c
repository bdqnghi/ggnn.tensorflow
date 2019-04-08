int main()
{
	int sz[1000][1000];
	int n,i,j,a1,a2,b1,b2,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if((sz[i][j]==0)&&(sz[i-1][j]!=0)&&(sz[i][j-1]!=0))
			{
				a1=i;
				b1=j;
			}
		}
	}
	for(i=n;i>0;i--)
	{
		for(j=n;j>0;j--)
		{
			if((sz[i][j]==0)&&(sz[i+1][j]!=0)&&(sz[i][j+1]!=0))
			{
				a2=i;
				b2=j;
			}
		}
	}
	s=(a2-a1-1)*(b2-b1-1);
	printf("%d",s);
	return 0;
}
