
int main() {
	int i, n, j, m;
	double s = 0;
	cin >> n;
	for (i = 1; i <= n; i++) {
		s = 0;
		cin >> m;
		double a[m];//????
		double x[m + 1];//????
		x[0] = 1;
		x[1] = 2;
		for (j = 2; j < m + 1; j++)//????
			x[j] = x[j - 1] + x[j - 2];
		for (j = 0; j < m; j++)
			a[j] = x[j + 1] / x[j];
		for (j = 0; j < m; j++)
			s = s + a[j];
		printf("%.3f\n", s);
	}

	return 0;
}