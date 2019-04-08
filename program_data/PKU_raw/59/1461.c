int main()
{
	int n,m,i,j,k,sum=0;
	char x[100][100],y[100][100];
	cin>>n;                                   //??n
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>x[i][j];            //?????????
			y[i][j]=x[i][j];
		}
	}
	cin>>m;
	for(k=1;k<m;k++)
	{
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(x[i][j]=='@')
				{
					if(i>1&&x[i-1][j]=='.') y[i-1][j]='@';
					if(i<n&&x[i+1][j]=='.') y[i+1][j]='@';
					if(j<n&&x[i][j+1]=='.') y[i][j+1]='@';
					if(j>1&&x[i][j-1]=='.') y[i][j-1]='@';                                                //??????????
				}
			}
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				x[i][j]=y[i][j];    //??????????????
			}
		}
	}
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(x[i][j]=='@') sum++;    //?????
			}
	}
	cout<<sum<<endl;
	return 0;
}
