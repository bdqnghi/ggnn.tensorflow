
int main() 
{
	int m, q, n;
	int a[101][101] = {0}, b[101][101] = {0}, c[101][101] = {0};
	cin >> m >> q;
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= q; j++)
		{
			cin >> a[i][j];
		}
	cin >> q >> n;
	for (int i = 1; i <= q; i++)
		for (int j = 1; j <= n; j++)
		{
			cin >> b[i][j];
		}
	for (int i = 1; i <= m; i++)
		for (int j = 1; j <= n; j++)
		{
			for (int k = 1; k <= q; k++)
			{
				c[i][j] = c[i][j] + a[i][k] * b[k][j];
			}
		}
	for (int i = 1; i <= m; i++)
	{
		cout << c[i][1];
		for (int j = 2; j <= n;j++)
		{
			cout << " " << c[i][j];
		}
		cout << endl;
	}
	return 0;
}
