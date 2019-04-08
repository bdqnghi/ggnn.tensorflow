int main()
{
	int i,j,n,m,a[100][100];
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==0||(a[i][j]>=a[i-1][j]&&i>0))
			{
				if(i==n-1||(a[i][j]>=a[i+1][j]&&i<n-1))
				{
					if(j==0||(a[i][j]>=a[i][j-1]&&j>0))
					{
						if((j==m-1||a[i][j]>=a[i][j+1]&&j<m-1))
							printf("%d %d\n",i,j);
					}
				}
			}
		}
	}
}