int n, m, ans, a[20];

void calc(int dep, int x)
{
	if (x == 1)
	{
		ans++;
		return;
	}
	for (int i = a[dep-1]; i <= x; i++)
		if (!(x % i))
		{
			a[dep] = i;
			calc(dep + 1, x / i);
		}
}

int main()
{
	scanf("%d", &n);
	for (a[0] = 2;n; n--)
	{
		scanf("%d", &m);
		ans = 0;
		calc(1, m);
		printf("%d\n", ans);
	}
	return 0;
}