
int main()
{
	int m,n,gao[20][20],i,j;

	cin >> m >> n;
	for(i = 0; i < m;i++)
		for(j = 0; j < n; j++)
			cin >> gao[i][j];
	if(gao[0][0] >= gao[0][1] && gao[0][0] >= gao[1][0])
		cout << 0 << ' ' << 0 << endl;
	for(j = 1; j < n - 1; j++)
		if(gao[0][j] >= gao[0][j - 1] 
			&& gao[0][j] >= gao[0][j + 1] 
			&& gao[0][j] >= gao[1][j])
			cout << 0 << ' ' << j << endl;
	if(gao[0][n - 1] >= gao[0][n - 2] && gao[0][n - 1] >= gao[1][n - 1])
		cout << 0 << ' ' << n - 1 << endl;
	for(i = 1; i < m - 1;i++)
		for(j = 0; j < n; j++)
		{
			if(j ==0 && gao[i][j] >= gao[i - 1][j] 
				&& gao[i][j] >= gao[i][j + 1] 
				&& gao[i][j] >= gao[i + 1][j])
				cout << i << ' ' << j << endl;
			else if(j > 0 && j < n - 1 && gao[i][j] >= gao[i - 1][j] 
				&& gao[i][j] >= gao[i][j - 1] 
				&& gao[i][j] >= gao[i][j + 1] 
				&& gao[i][j] >= gao[i + 1][j])
				cout << i << ' ' << j << endl;
			else if(j == n - 1 && gao[i][j] >= gao[i - 1][j] 
				&& gao[i][j] >= gao[i][j - 1] 
				&& gao[i][j] >= gao[i + 1][j])
				cout << i << ' ' << j << endl;
		}
	if(gao[m - 1][0] >= gao[m - 1][1] && gao[m - 1][0] >= gao[m - 2][0])
		cout << m - 1 << ' ' << 0 << endl;
	for(j = 1; j < n - 1; j++)
		if(gao[m - 1][j] >= gao[m - 1][j - 1] 
			&& gao[m -1 ][j] >= gao[m - 1][j + 1] 
			&& gao[m - 1][j] >= gao[m - 2][j])
			cout << m - 1 << ' ' << j << endl;
	if(gao[ m- 1][n - 1] >= gao[m - 1][n - 2] && gao[m - 1][n - 1] >= gao[m - 2][n - 1])
		cout << m - 1 << ' ' << n - 1 << endl;

	return 0;
}