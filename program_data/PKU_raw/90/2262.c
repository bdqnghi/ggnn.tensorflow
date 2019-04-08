int fun(int m, int n, int j) {
	int i, s = 0;
	if (n == 1)
		return m >= j;
	for (i = j; i < m; i++)
		s = s + fun(m - i, n - 1, i);
	return s;
}
int main() {
	int n, m, s;
	int t;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		if (n > m)
			n = m;
		s = fun(m, n, 0);
		cout << s << endl;
	}
	return 0;
}