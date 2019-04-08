int main()
{
	int i,j,k,m,n;
	int xijun[11][11],next[11][11];
	cin>>m>>n;
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=10;j++)
		{
			xijun[i][j]=0;
			next[i][j]=0;
		}
	}
	xijun[5][5]=next[5][5]=m;
	for(i=1;i<=n;i++)
	{
		
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
					next[j][k]+=xijun[j][k];
				    next[j-1][k]+=xijun[j][k];
					next[j-1][k-1]+=xijun[j][k];
					next[j-1][k+1]+=xijun[j][k];
					next[j][k-1]+=xijun[j][k];
					next[j][k+1]+=xijun[j][k];
					next[j+1][k-1]+=xijun[j][k];
					next[j+1][k]+=xijun[j][k];
					next[j+1][k+1]+=xijun[j][k];;
			}
		}
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{
				xijun[j][k]=next[j][k];
			}
		}
	}
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=8;j++)
		{
			cout<<xijun[i][j]<<" ";
		}
		cout<<xijun[i][9]<<endl;
	}
	return 0;
}
