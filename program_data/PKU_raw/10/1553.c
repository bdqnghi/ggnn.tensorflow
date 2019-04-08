
int n;
int a[MAXN];
int f[MAXN];

void input()
{
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
}

int main()
{
	input();
	for (int i = 0; i < n; i++)
		f[i] = 1;
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
			if (a[j] >= a[i] && f[j]+1 > f[i])
				f[i] = f[j]+1;
	}
	int ans = 0;
	for (int i = 0; i < n; i++)
		if (f[i] > ans)
			ans = f[i];
	cout << ans << endl;
}