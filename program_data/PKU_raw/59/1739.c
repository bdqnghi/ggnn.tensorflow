//********************************
//* ??????? **
//* ????? 1300012990 **
//* ???2013.11.01 **
//********************************
int main()
{
	int n, m, i, j, day, sum=0;
	char a[200][200], b[200][200];
	cin >> n;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin >> a[i][j];
	cin >> m;
	for(j=0;j<=n+1;j++)
	{
		a[0][j]='#';
		a[n+1][j]='#';
	}
	for(i=1;i<=n;i++)
	{
		a[i][0]='#';
		a[i][n+1]='#';
	}
	for(day=2;day<=m;day++)
	{
	  for(i=1;i<=n;i++)
	  {
		  for(j=1;j<=n;j++)
		  {
			  if(a[i][j]=='.'&& (a[i-1][j]=='@' || a[i][j-1]=='@' || a[i+1][j]=='@' || a[i][j+1]=='@'))
				   b[i][j]='@';
			  else
				  b[i][j]=a[i][j];
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
	 for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(a[i][j]=='@')
				sum++;
	cout << sum <<endl;
	return 0;
}

