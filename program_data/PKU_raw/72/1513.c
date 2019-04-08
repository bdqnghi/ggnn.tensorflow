int main()
{	
	int num[22][22],i,j,m,n;
	while(cin >> m >> n)
	{
		memset(num,0,sizeof(num));
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
			cin >> num[i][j];
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((num[i][j]>=num[i][j-1])&&(num[i][j]>=num[i][j+1])&&(num[i][j]>=num[i+1][j])&&(num[i][j]>=num[i-1][j]))
			{
				cout << i-1 << " " << j-1  << endl;
			}
		}
	}
	}
	return 0;
}
