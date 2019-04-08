int main()
{
	int e,i,j,n,m,k=0,sz[len+2][len+2],x[len],y[len];
	scanf("%d %d",&m,&n);
	for(j=1;j<m+1;j++)
	{
		for(i=1;i<n+1;i++)
		{
			scanf("%d",&sz[j][i]);
		}
	}
		for(j=0;j<m+2;j++)
		{
			for(i=0;i<n+2;i++)
			{
				sz[0][i]=0;
				sz[j][0]=0;
				sz[m+1][i]=0;
				sz[j][n+1]=0;
			}
		}
		for(j=1;j<m+1;j++)
		{

			
			
			
			
			
			
			
			
			for(i=1;i<n+1;i++)
			{
				if((sz[j][i]>=sz[j][i+1])&&(sz[j][i]>=sz[j][i-1])&&(sz[j][i]>=sz[j+1][i])&&(sz[j][i]>=sz[j-1][i]))
				{
					x[k]=j-1;
					y[k]=i-1;
					k++;
				}

			
			
			}
		}
		
		for(i=0;i<k;i++)
		{
			printf("%d %d\n",x[i],y[i]);
		}
		return 0;
}