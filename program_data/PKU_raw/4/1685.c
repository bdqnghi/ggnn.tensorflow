int n, m;
int x[1000][1000];
void f(int i, int j)
{
	cout << x[i][j] << endl;
	if (i == m && j == n)
		return;
	else if (j == 1 && i + 1 <= n)
		f(1, i + 1);
	else if (j == 1 && i + 1 > n)
		f(i + j - n + 1, n);
	else if (i == m && i + j <= n)
		f(1, i + j);
	else if (i == m && i + j > n)
		f(i + j - n + 1, n);
	else
		f(i + 1, j - 1);
}
int main()
{
	cin >> m >> n;
	int i, j;
	for (i = 1; i <= m; i ++)
		for (j = 1; j <= n; j ++)
			cin >> x[i][j];
	f(1, 1);
	return 0;
}