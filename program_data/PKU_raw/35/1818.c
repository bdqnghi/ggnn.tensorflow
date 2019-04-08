
int main()
{
	int n,m;
	int sz[99][99],i,j,i1,j1,ri,rj;
	int k,kk=0;
	scanf("%d,%d",&n,&m);
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			k=0;
			for(i1=0;i1<n;i1++)
			{
				if(i1==i)
				{
					continue;
				}
				if(sz[i1][j]<=sz[i][j])
				{
					k=1;
				}
			}
			for(j1=0;j1<m;j1++)
			{
				if(j1==j)
				{
					continue;
				}
				if(sz[i][j1]>=sz[i][j])
				{
					k=1;
				}
			}
			if(k==1)
			{
				continue;
			}
			kk=1;
			ri=i;
			rj=j;
		}
	}
	if(kk==0)
	{
		printf("No");
	}
	if(kk==1)
	{
		printf("%d+%d",ri,rj);
	}
	return 0;
}