int main()
{
	int a[22][22], i, j, m, n;
	cin >> m >> n;
	for(i=1; i <= m; i++)
		for(j=1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	for(i=0; i<22; i++)
	{
		a[0][i]=0;
		a[m+1][i]=0;
		a[i][0]=0;
		a[i][n+1]=0;
	}
	for(i=1; i <= m; i++)
		for(j=1; j <= n; j++)
		{
			if(a[i][j] >= a[i-1][j] && a[i][j] >= a[i+1][j] && a[i][j] >= a[i][j-1] && a[i][j] >= a[i][j+1])
				cout << i-1 << " " << j-1 << endl;
		}
	return 0; 
}