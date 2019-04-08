int main()
{
	int i,j,k,n,m,a[11][11],b[11][11];
	memset(a,0,sizeof(a));memset(b,0,sizeof(b));
	cin >> m >> n;
	a[5][5]=m;
	for(k=1;k<=n;k++)
	{
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
				b[i][j]=a[i][j];
		}
		memset(a,0,sizeof(a));
		for(i=1;i<=9;i++)
		{
			for(j=1;j<=9;j++)
			{
				if(b[i][j]!=0)
				{
					a[i][j]+=2*b[i][j];
					a[i-1][j]+=b[i][j];
					a[i+1][j]+=b[i][j];
					a[i][j-1]+=b[i][j];
					a[i][j+1]+=b[i][j];
					a[i-1][j+1]+=b[i][j];
					a[i-1][j-1]+=b[i][j];
					a[i+1][j+1]+=b[i][j];
					a[i+1][j-1]+=b[i][j];
				}
			}

		}
	}
	for(i=1;i<=9;i++)
	{
		cout <<a[i][1];
		for(j=2;j<=9;j++)
		{
			cout << " " << a[i][j];
			if(j==9)
				cout << endl;
		}
	}
	return 0;
}


