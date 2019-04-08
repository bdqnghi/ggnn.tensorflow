
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int sz[6][9][9];
	int day=1;
	int i,j,e;
	for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				sz[0][i][j]=0;
			}
		}
	sz[0][4][4]=m;
	for(day=1;day<=n;day++)
	{
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				sz[day][i][j]=0;
			}
		}
		for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
				if(sz[day-1][i][j]!=0)
				{
					e=sz[day-1][i][j];
					sz[day][i-1][j-1]+=e;
					sz[day][i-1][j]+=e;
					sz[day][i-1][j+1]+=e;
					sz[day][i][j-1]+=e;
					sz[day][i][j]+=e*2;
					sz[day][i][j+1]+=e;
					sz[day][i+1][j-1]+=e;
					sz[day][i+1][j]+=e;
					sz[day][i+1][j+1]+=e;
				}
			}
		}
	}
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j==8)
			{
				printf("%d\n",sz[n][i][j]);
			}
			else
			{
				printf("%d ",sz[n][i][j]);
			}
		}
	}
	return 0;
}
