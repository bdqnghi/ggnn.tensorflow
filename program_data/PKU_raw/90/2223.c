

int main()
{
	int m, n, t, opt[101][101];
	memset(opt, 0, sizeof(opt));
	for (int i = 0; i < 101; ++i)
		opt[0][i] = 1;
	for (int i = 0; i < 101; ++i)
		opt[i][1] = 1;
	for (int j = 1; j < 101; ++j)
		opt[1][j] = 1;
	for (int j = 2; j < 101; ++j)
		for (int i = 2; i < 101; ++i) {
			if (i >= j) opt[i][j] += opt[i-j][j];
			opt[i][j] += opt[i][j-1];
		}
	cin >> t;
	while (t--) {
		cin >> m >> n; 
		cout << opt[m][n] << endl;
	}
	return 0;	
}