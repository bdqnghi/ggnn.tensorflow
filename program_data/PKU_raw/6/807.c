int main()
{
	int m[100],n[100],i,j,a,k,sz[100][100],sum[100]={0};
	scanf("%d",&k);
	for(a=0;a<k;a++)
	{
		scanf("%d%d",&m[a],&n[a]);
		for(i=0;i<m[a];i++)
		{
			for(j=0;j<n[a];j++)
			{
				scanf("%d",&sz[i][j]);
			}
		}
	     if(m[a]!=1&&n[a]!=1)
		 {
			for(j=0;j<n[a];j++)
			{
				sum[a]+=sz[0][j];
				sum[a]+=sz[m[a]-1][j];
			}
			for(i=1;i<m[a]-1;i++)
			{
				sum[a]+=sz[i][0];
				sum[a]+=sz[i][n[a]-1];
			}
		 }
		 else
		 {
			 for(i=0;i<m[a];i++)
			 {
				 for(j=0;j<n[a];j++)
				 {
					 sum[a]+=sz[i][j];
				 }
			 }
		 }
	}
		for(a=0;a<k;a++)
		printf("%d\n",sum[a]);
	
		return 0;
}


