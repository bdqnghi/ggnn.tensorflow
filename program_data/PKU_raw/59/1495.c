int main()
{
	int n,i,j;
	cin>>n;
	char r[100][100];
	int a[100][100];
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>r[i][j];
			if(r[i][j]=='.')a[i][j]=1;
			else if(r[i][j]=='#')a[i][j]=0;
			else a[i][j]=-1;
		}
	}
	for(i=0;i<=n+1;i++)
	{
		a[i][0]=0;
		a[i][n+1]=0;
	}
	for(j=0;j<=n+1;j++)
	{
		a[0][j]=0;
		a[n+1][j]=0;
	}
	int m,k;
	int b[100][100];
	cin>>m;
	for(i=0;i<=n+1;i++)
	{
		for(j=0;j<=n+1;j++)
		{
			b[i][j]=a[i][j];
		}
	}
	for(k=0;k<m-1;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==1&&(a[i+1][j]==-1||a[i-1][j]==-1||a[i][j+1]==-1||a[i][j-1]==-1||a[i][j]==-1)&&a[i][j]!=0)
				{
					b[i][j]=-1;

				}
			}
		}

		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				a[i][j]=b[i][j];
			}
		}
	}
	int num=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==-1)num++;
		}
	}
	cout<<num<<endl;
	return 0;
}
