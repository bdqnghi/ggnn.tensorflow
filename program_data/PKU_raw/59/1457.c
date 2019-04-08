int a[102][102];
int main()
{   int m,n;char b;
	cin>>n;
	
	for(int i=1;i<=n;++i)
		for(int j=1;j<=n;++j)
		{
			cin>>b;
			if(b=='#')
			a[i][j]=1;
			if(b=='.')
			a[i][j]=2;
			if(b=='@')
			a[i][j]=3;
		}
		cin>>m;
		for(int i=0;i<m-1;++i)
		{
			int temp[102][102];
			for(int i=0;i<102;++i)
				for(int j=0;j<102;++j)
				{temp[i][j]=a[i][j];
				}
			for(int i=1;i<=n;++i)
				for(int j=1;j<=n;++j)
				{
					if(a[i][j]==3&&a[i][j]==temp[i][j])
					{   
						if(a[i][j-1]==2)
							a[i][j-1]=3;
						if(a[i][j+1]==2)
							a[i][j+1]=3;
						if(a[i+1][j]==2)
							a[i+1][j]=3;
						if(a[i-1][j]==2)
							a[i-1][j]=3;
					}
				}
		}
		int s=0;
		for(int i=1;i<=n;++i)
				for(int j=1;j<=n;++j)
				{   
					if(a[i][j]==3)
						s+=1;
				}
				cout<<s;
	
	return 0;
}