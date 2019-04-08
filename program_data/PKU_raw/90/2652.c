int dfs(int m, int n) {
	if (n == 1) return 1;
	int res = dfs(m, n-1);
	if (m >= n) res += dfs(m-n, n);
	return res;
}
int main() {
	int t, m, n;
	cin >> t;
	while (t--) {
		cin >> m >> n;
		cout << dfs(m,n) << endl;	
	}
}
