int main()
{
	int n,m,num[30][30],cnt=0;
	cin>>m>>n;
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		cin>>num[i][j];
	}
	for(int j=1;j<=n;j++)
		num[0][j]=num[1][j];
	for(int i=1;i<=m;i++)
	{
		num[i][0]=num[i][1];
		num[i][n+1]=num[i][n];
	}
	for(int j=1;j<=n;j++)
		num[m+1][j]=num[m][j];
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
			{
				int word=0;
			{
				word+=(num[i-1][j]<=num[i][j]);
			    word+=(num[i+1][j]<=num[i][j]);
			    word+=(num[i][j-1]<=num[i][j]);
			    word+=(num[i][j+1]<=num[i][j]);
		    }
			if(word==4) cout<<i-1<<" "<<j-1<<endl;
	}
	}
	return 0;
}
