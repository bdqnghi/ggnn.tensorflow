int main() {
	char c[100][100];
	int a[100][100];
	int x[10000], y[10000];
	int kx = 0, ky = 0;
	int n, m, k = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> c[i][j];
	cin >> m;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			if (c[i][j] == '.')
				a[i][j] = 1;
			if (c[i][j] == '#')
				a[i][j] = 0;
			if (c[i][j] == '@')
				a[i][j] = -1;
		}
	while (m > 1) {
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
				if (a[i][j] == -1) {
					x[kx++] = i;
					y[ky++] = j;
				}
		for (int i = 0; i < kx; i++) {
			{
				if ((x[i] - 1 >= 0) && (a[x[i] - 1][y[i]] == 1))
					a[x[i] - 1][y[i]] = -1;
				if ((y[i] - 1 >= 0) && (a[x[i]][y[i] - 1] == 1))
					a[x[i]][y[i] - 1] = -1;
				if ((x[i] + 1 < n) && (a[x[i] + 1][y[i]] == 1))
					a[x[i] + 1][y[i]] = -1;
				if ((y[i] + 1 < n) && (a[x[i]][y[i] + 1] == 1))
					a[x[i]][y[i] + 1] = -1;
			}
		}
		kx = 0;
		ky = 0;

		m--;
	}
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] == -1)
				k++;
	cout << k << endl;
	return 0;
}
