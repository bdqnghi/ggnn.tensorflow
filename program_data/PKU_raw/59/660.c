int main()
{
	int a[110][110]={0};
	//???????0 ??1 ???2 ???3 ????
	int n,i,j,d,m;
	char c;
	cin >>n;
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
		{
			cin >>c;
			switch (c)
			{
			case '.':a[i][j]=1;break;
			case '#':a[i][j]=0;break;
			case '@':a[i][j]=2;break;
			}
		}
	cin >>m;//input
	for (d=2;d<=m;d++)
	{
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				if (a[i][j]==2)
				{
					if ((j+1<=n)&&(a[i][j+1]==1)) 
						a[i][j+1]=3;
					if ((j-1>0)&&(a[i][j-1]==1)) 
						a[i][j-1]=3;
					if ((i+1<=n)&&(a[i+1][j]==1)) 
						a[i+1][j]=3;
					if ((i-1>0)&&(a[i-1][j]==1)) 
						a[i-1][j]=3;
				}
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				if (a[i][j]==3)
					a[i][j]=2;//???????????????
	}//??m??????
	int total=0;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if (a[i][j]==2)
				total++;
		}
	}
	cout <<total;//??
	return 0;
}