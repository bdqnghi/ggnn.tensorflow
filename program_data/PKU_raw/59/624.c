int main()
{
	char mat[100][100];
	int n,d;
	cin>>n;
	getchar();
	for(int i=1;i<=n;i++)            //???????
	{
		for(int j=1;j<=n;j++)
		{
			mat[i][j]=getchar();
		}
		getchar();
	}
	cin>>d;
	for(int x=1;x<d;x++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(mat[i][j]=='@')
				{
					if(mat[i-1][j]=='.')
						mat[i-1][j]='a';     //'a'???????
					if(mat[i+1][j]=='.')
						mat[i+1][j]='a';
					if(mat[i][j-1]=='.')
						mat[i][j-1]='a';
					if(mat[i][j+1]=='.')
						mat[i][j+1]='a';
				}
			}
		}
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(mat[i][j]=='a')
					mat[i][j]='@';
			}
		}
	}
	int s=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(mat[i][j]=='@')
				s++;
		}
	}
	cout<<s<<endl;
	return 0;
}