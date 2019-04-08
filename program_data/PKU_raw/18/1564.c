/*
 * ????practice6.cpp
 * ??????
 * ?????2012-12-27
 * ?????????????
 */



int a[100][100], n;

int sum(int n) {
	if (n == 1)
		return 0;
	else {
		int i, j, m;
		for (i = 0; i < n; ++i) {
			m = 1000;
			for (j = 0; j < n; ++j)
				if (a[i][j] < m)
					m = a[i][j];
			for (j = 0; j < n; ++j)
				a[i][j] -= m;
		}
		for (i = 0; i < n; ++i) {
			m = 1000;
			for (j = 0; j < n; ++j)
				if (a[j][i] < m)
					m = a[j][i];
			for (j = 0; j < n; ++j)
				a[j][i] -= m;
		}
		int num = a[1][1];
		for (i = 0; i < n; ++i)
			for (j = 2; j < n; ++j)
				a[i][j - 1] = a[i][j];
		for (i = 0; i < n - 1; ++i)
			for (j = 2; j < n; ++j)
				a[j - 1][i] = a[j][i];
		return num + sum(n - 1);
	}
}

int main() {
	int i, j, k;
	cin >> n;
	for (k = 0; k < n; ++k) {
		for (i = 0; i < n; ++i)
			for (j = 0; j < n; ++j)
				cin >> a[i][j];
		cout << sum(n) << endl;
	}
	return 0;
}