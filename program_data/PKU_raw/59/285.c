int main()
{
	char a[100][100]={'a'};
	int n, k, i, j, l, b[100][100]={0}, count=0;
	cin>>n;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin>>a[i][j];
	cin>>k;
	for(l=1;l<k;l++)
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(a[i][j]=='@')
				{
					b[i][j]=1;
					if(a[i-1][j]=='.'&&i!=0)
						b[i-1][j]=1;
					if(a[i+1][j]=='.'&&i!=n-1)
						b[i+1][j]=1;
					if(a[i][j-1]=='.'&&j!=0)
						b[i][j-1]=1;
					if(a[i][j+1]=='.'&&j!=n-1)
						b[i][j+1]=1;
				}
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				if(b[i][j]==1)
					a[i][j]='@';
	}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(b[i][j]==1)
				count++;
	cout<<count<<endl;
	return 0;
}
