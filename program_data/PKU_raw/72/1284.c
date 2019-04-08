int main() {
	int m, n, k = 0;
	int a[30][30] = { 0 };
	int b[410][2] = { 0 };
	cin >> m >> n;
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (a[i][j] >= a[i - 1][j] && a[i][j] >= a[i + 1][j] && a[i][j]
					>= a[i][j + 1] && a[i][j] >= a[i][j - 1]) {
				b[k][0] = i;
				b[k][1] = j;
				k++;
			}
		}
	}
	for (int i = 0; i < k; i++)
		cout << b[i][0] - 1 << ' ' << b[i][1] - 1 << endl;
	return 0;
}