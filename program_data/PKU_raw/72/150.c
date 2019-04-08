int main()
{
	int m,n,i,j;
	int num[22][22];
	cin>>m>>n;
	for(i=0;i<22;i++)
	{
		for(j=0;j<22;j++)
		{
			num[i][j]=0;
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>num[i][j];
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((num[i][j]>=num[i-1][j])&&(num[i][j]>=num[i+1][j])&&(num[i][j]>=num[i][j-1])&&(num[i][j]>=num[i][j+1]))
			{
				cout<<i-1<<' '<<j-1<<endl;
			}
		}
	}
	return 0;
}