
int main()
{
	int n;
	scanf("%d",&n);
	int sz[49][49][49];
	int i,j,k;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				scanf("%d",&sz[i][j][k]);
			}
		}
	}
	int nn,min;
	int re[49]={0};
	for(i=1;i<=n;i++)                                 //???
	{
		for(nn=1;nn<=n-1;nn++)                        //????
		{
			for(j=nn;j<=n;j++)                        //???
			{
				min=sz[i][j][nn];
				while(min!=0)
				{
					for(k=nn;k<=n;k++)                //??????????
					{
						if(sz[i][j][k]<min)
						{
							min=sz[i][j][k];
						}
					}
					for(k=nn;k<=n;k++)                //???
					{
						sz[i][j][k]-=min;
					}
				}
			}
			for(j=nn;j<=n;j++)                        //???
			{
				min=sz[i][nn][j];
				while(min!=0)
				{
					for(k=nn;k<=n;k++)                //??????????
					{
						if(sz[i][k][j]<min)
						{
							min=sz[i][k][j];
						}
					}
					for(k=nn;k<=n;k++)                //???
					{
						sz[i][k][j]-=min;
					}
				}
			}
			re[i]+=sz[i][nn+1][nn+1];
			sz[i][nn+1][nn+1]=sz[i][nn][nn];
			for(j=nn+2;j<=n;j++)
			{
				sz[i][nn+1][j]=sz[i][nn][j];
			}
			for(j=nn+2;j<=n;j++)
			{
				sz[i][j][nn+1]=sz[i][j][nn];
			}
		}
		printf("%d\n",re[i]);
	}
	return 0;
}