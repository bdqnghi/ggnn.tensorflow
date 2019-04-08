
int main(int argc, char* argv[])
{
	int sz[9][9][5],n,m,i,j,k,p,q;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<5;k++)
			{
				sz[i][j][k]=0;
			}
		}
	}
	scanf("%d %d",&n,&m);
	sz[4][4][0]=n;
	for(k=0;k<m;k++)
	{
		for(i=1;i<8;i++)
		{
			for(j=1;j<8;j++)
			{
				if(sz[i][j][k]!=0)
				{
					sz[i-1][j-1][k+1]+=sz[i][j][k];
					sz[i-1][j][k+1]+=sz[i][j][k];
					sz[i-1][j+1][k+1]+=sz[i][j][k];
					sz[i][j-1][k+1]+=sz[i][j][k];
					sz[i][j][k+1]+=sz[i][j][k]*2;
					sz[i][j+1][k+1]+=sz[i][j][k];
					sz[i+1][j-1][k+1]+=sz[i][j][k];
					sz[i+1][j][k+1]+=sz[i][j][k];
					sz[i+1][j+1][k+1]+=sz[i][j][k];
				}
			}
		}
	}
	for(i=0;i<9;i++)
	{
		printf("%d",sz[i][0][m]);
		for(j=1;j<9;j++)
		{
			printf(" %d",sz[i][j][m]);
		}
		printf("\n");
	}
	return 0;

}