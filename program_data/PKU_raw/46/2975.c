int main()
{
	int a, b, n = 1;
	cin >> a >> b;
	int c[101][101];
	for (int i = 1; i <= a; i++)
	for (int j = 1; j <= b; j++)
	cin >> c[i][j];
	while (2 * n <= a && 2 * n <= b)
	{
		for (int i = n; i <= b - n; i++)
		cout << c[n][i] << endl;
		for (int i = n; i <= a - n; i++)
		cout << c[i][b-n+1] << endl;
		for (int i = b - n + 1; i > n; i--)
		cout << c[a-n+1][i] << endl;
		for (int i = a - n+1; i > n; i--)
		cout << c[i][n] << endl;
		n++;
	}
	for (int i = n; i <= b + 1 - n; i++)
	for (int j = n; j <= a + 1 - n; j++)
	cout << c[j][i] << endl;
	return 0;
}