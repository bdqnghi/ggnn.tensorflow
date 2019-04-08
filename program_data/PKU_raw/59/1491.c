int main()
{
	char a[100][100],b[100][100];
	int n,i,j,m,k,sum=0;
	cin >> n;
	for (i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >>a[i][j];
		cin>>m;
	for(k=2;k<=m;k++)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if (a[i][j]=='@')
				{
					if (i!=0&&a[i-1][j]=='.')
						b[i-1][j]='@';
					if(i!=n-1&&a[i+1][j]=='.')
						b[i+1][j]='@';
					if(j!=0&&a[i][j-1]=='.')
						b[i][j-1]='@';
					if(j!=n-1&&a[i][j+1]=='.')
						b[i][j+1]='@';
				}
			}
		}
		for (i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				if(b[i][j]=='@')
					a[i][j]='@';
			}
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='@')
				sum++;
		}
		cout << sum <<endl;
		return 0;
}
