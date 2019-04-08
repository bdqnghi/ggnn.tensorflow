int main ()
{
	int n,i,j,m,i1,i2;
	cin>>n;
	char liu[100][100][100];
	for(i=0;i<=99;i++)
	{
		for(j=0;j<=99;j++)
		{
			for(i1=0;i1<=99;i1++)
			{
				liu[i][j][i1]=' ';
			}
		}
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>liu[1][i][j];
		}
	}
    cin>>m;
	for(i=1;i<=m;i++)
	{
		for(j=0;j<=99;j++)
		{
			for(i1=0;i1<=99;i1++)
			{
				liu[i+1][j][i1]=liu[i][j][i1];
			}
		}
		for(i1=1;i1<=n;i1++)
		{
			for(i2=1;i2<=n;i2++)
			{
                if(liu[i][i1][i2]=='@')
				{
					if(liu[i][i1-1][i2]=='.')liu[i+1][i1-1][i2]='@';
					if(liu[i][i1+1][i2]=='.')liu[i+1][i1+1][i2]='@';
					if(liu[i][i1][i2-1]=='.')liu[i+1][i1][i2-1]='@';
					if(liu[i][i1][i2+1]=='.')liu[i+1][i1][i2+1]='@';
				}
			}
		}
	}
	int all=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(liu[m][i][j]=='@')all++;
		}
	}
	cout<<all;
	
     return 0;
}