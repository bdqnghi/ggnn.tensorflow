char a[100][100];
int main()
{
	int n,m,s=0;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>a[i][j];
	cin>>m;
	for(int k=1;k<m;k++)
	{
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='@'){
				if(i>0&&a[i-1][j]=='.') a[i-1][j]='*';
				if(j>0&&a[i][j-1]=='.') a[i][j-1]='*';
				if(i<n-1&&a[i+1][j]=='.') a[i+1][j]='*';
				if(j<n-1&&a[i][j+1]=='.') a[i][j+1]='*';
				}
			}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(a[i][j]=='*') a[i][j]='@';
			}
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]=='@') s++;
		}
	}
	cout<<s;
	return 0;
}
