
int n, a[MAXN + 10], f[MAXN + 10];

int main()
{

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			if (a[j] >= a[i]) f[i] = max(f[i], f[j]);
		}
		f[i]++;
		ans = max(ans, f[i]);
	}
	cout << ans << endl;
	return 0;
}
