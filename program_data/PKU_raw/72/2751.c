int main()
{
	int m,n,mount[100][100]={0};
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			cin>>mount[i][j];
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(mount[i][j]>=mount[i][j+1]&&mount[i][j]>=mount[i][j-1]&&mount[i][j]>=mount[i+1][j]&&mount[i][j]>=mount[i-1][j])
				cout<<i-1<<" "<<j-1<<endl;
		}
	}
	return 0;
}