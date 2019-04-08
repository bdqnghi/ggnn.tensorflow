
int main(int argc, char* argv[])
{
	int m,n,sz[22][22],i,j,p,q;
	scanf("%d%d",&m,&n);
	for(i=0;i<m+2;i++)
	{
		for(j=0;j<n+2;j++)
		{
			if(i==0||i==m+1||j==0||j==n+1)
			{
				sz[i][j]=0;
			}
			else
			{
			    scanf("%d",&sz[i][j]);
			}
		}
	}
    for(i=1;i<m+1;i++)
	{
		for(j=1;j<n+1;j++)
		{
			if(sz[i][j]>=sz[i][j-1]&&sz[i][j]>=sz[i][j+1]&&sz[i][j]>=sz[i-1][j]&&sz[i][j]>=sz[i+1][j])
			{
				printf("%d %d\n",i-1,j-1);
			}
		}
	}
               
	return 0;
}
