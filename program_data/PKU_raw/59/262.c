int main()
{
	char ch[100][100],ch1[100][100];
	int n,m,sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			cin>>ch[i][j];
	cin>>m;
	for(int k=0;k<m-1;k++)
	{
		
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				ch1[i][j]=ch[i][j];
			}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
			{
				if(ch1[i][j]=='@')
				{
					if(ch[i+1][j]=='.'&&(i+1)<n)
						ch[i+1][j]='@';
					if(ch[i-1][j]=='.'&&(i-1)>=0)
						ch[i-1][j]='@';
					if(ch[i][j+1]=='.'&&(j+1)<n)
						ch[i][j+1]='@';
					if(ch[i][j-1]=='.'&&(j-1)>=0)
						ch[i][j-1]='@';
				}
			}
	}
	for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(ch[i][j]=='@')
					sum++;
	cout<<sum<<endl;
	return 0;
}


