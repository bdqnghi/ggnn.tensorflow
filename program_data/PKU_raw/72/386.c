int main()
{
	int m, n, i, j, h[20][20];
	cin >> n; cin >> m;
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
		{
			cin >> h[i][j];
		}
	if(h[0][0] >= h[0][1] && h[0][0] >= h[1][0])
		cout << "0 0"<< endl;
	for(j = 1; j < m - 1; j ++)
		{
			if( h[0][j] >= h[1][j] && h[0][j] >= h[0][j+1] && h[0][j] >= h[0][j - 1])
			cout << "0 " << j << endl;
		}
	if(h[0][m - 1] >= h[0][m - 2] && h[0][m - 1] >= h[1][m - 1])
		cout << "0 "<<m - 1 << endl;
	for(i = 1; i < n-1; i++)
	{	
		if(h[i][0] >= h[i - 1][0] && h[i][0] >= h[i + 1][0] && h[i][0] >= h[i][1])
			cout << i << " 0" << endl;
		for(j = 1; j < m - 1; j ++)
		{
			if(h[i][j] >= h[i - 1][j] && h[i][j] >= h[i + 1][j] && h[i][j] >= h[i][j+1] && h[i][j] >= h[i][j - 1])
			cout << i << " " << j << endl;
		}
		if(h[i][j] >= h[i - 1][j] && h[i][j] >= h[i + 1][j]  && h[i][j] >= h[i][j - 1])
			cout << i << " " << j << endl;
	}
	if(h[n - 1][0] >= h[n - 1][1] && h[n - 1][0] >= h[n - 2][0])
		cout <<n - 1<< " 0"<< endl;
	for(j = 1; j < m - 1; j ++)
		{
			if( h[n - 1][j] >= h[n -2][j] && h[n -1][j] >= h[n -1][j+1] && h[n - 1][j] >= h[n - 1][j - 1])
			cout << n - 1 <<" " <<j << endl;
		}
	if(h[n - 1][m - 1] >= h[n -1][m - 2] && h[n - 1][m - 1] >= h[n - 2][m - 1])
		cout << n - 1<<" "<<m - 1 << endl;
	return 0;
}