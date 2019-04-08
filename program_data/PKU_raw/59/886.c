int main()
{
	int n,m,i,j,k;
	char a[100][101][101];
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[0][i][j];
	for(m=0;m<100;m++)
		for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					a[m][i][j]=a[0][i][j];
	cin>>m;
	for(k=0;k<m;k++)
	{
		for(i=0;i<n;i++)
				for(j=0;j<n;j++)
					if(a[k][i][j]=='@')
					{
						if(a[k][i-1][j]!='#') a[k+1][i-1][j]='@';
													if(a[k][i][j-1]!='#') a[k+1][i][j-1]='@';
													if(a[k][i+1][j]!='#') a[k+1][i+1][j]='@';
													if(a[k][i][j+1]!='#') a[k+1][i][j+1]='@';
					}
	}
	int q=0;
	for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			if(a[m-1][i][j]=='@')
				q++;
	cout<<q;
	return 0;
}