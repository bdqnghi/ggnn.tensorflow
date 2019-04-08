int find(int m, int n);
int main()
{
	int t, m, n;
	scanf("%d", &t);
	while (--t >= 0)
	{
		scanf("%d%d", &m, &n);
		printf("%d\n", find(m, n));
	}
	return 0;
}
int find(int m, int n)
{
	if (n == 1)
		return 1;
	else if (m == n)	
		return find(m, n - 1) + 1;
	else if (n > m)
		return find(m, m);
	else
		return find(m, n - 1) + find(m - n, n);
}