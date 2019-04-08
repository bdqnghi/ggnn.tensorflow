int main()
{
	char a[101][101];
	int n,m;
	cin >>n;
	int i, j,k,count=0;
	for(i =1;i<=n;i++)
	{
		for(j =1;j<=n;j++)
		{
			cin >>a[i][j];
		}
	}
	cin >>m;
	for (i =1; i<=m-1;i++)
	{
		for(j =1;j<=n;j++)
		{
			for(k =1;k<=n;k++)
			{
				if(a[j][k] == '@')
				{
					if(a[j][k-1]=='.')
						a[j][k-1]='a';
					if(a[j][k+1]=='.')
						a[j][k+1]='a';
					if(a[j-1][k]=='.')
						a[j-1][k]='a';
					if(a[j+1][k]=='.')
						a[j+1][k]='a';
				}
			}
		}
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=n;k++)
			{
				if(a[j][k]=='a')
					a[j][k]='@';
			}
		}
	}
	for(i =1;i<=n;i++)
	{
		for(j =1;j<=n;j++)
		{
			if(a[i][j] =='@')
				count++;
		}
	}
	cout <<count;
	return 0;
}