

int main()
{
	int n, m, a[1000];
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	cout << a[n - m];
	for (int i = n - m + 1; i < 2*n - m; i++)
		cout << ' ' << a[i % n];
	cout << endl;
    return 0;
}
