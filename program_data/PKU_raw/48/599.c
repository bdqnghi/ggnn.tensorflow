int main (   )
{
	int m,n,tian,i,j;
	int num[6][11][11];
	cin>>m>>n;
	for(tian=0;tian<=n+1;tian++)
	{
		for(i=0;i<=10;i++)
		{
			for(j=0;j<=10;j++)
			{
				num[tian][i][j]=0;
			}
		}
	}
	num[1][5][5]=m;
	for(tian=1;tian<=n;tian++)
	{
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				num[tian+1][i][j]=2*num[tian][i][j]+num[tian][i-1][j-1]+num[tian][i-1][j]+num[tian][i-1][j+1]+num[tian][i][j-1]+num[tian][i][j+1]+num[tian][i+1][j-1]+num[tian][i+1][j]+num[tian][i+1][j+1];
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j!=9)cout<<num[n+1][i][j]<<" ";
			else cout<<num[n+1][i][j];
		}
		cout<<endl;
	}
	return 0;
}