int main()
{
	int n, k, m,y=0,i,p;
	scanf("%d%d", &n, &k);
	for (m = 1; y != n; m++)
	{
		p = m; y = 0;
		for (i = 1; i <= n; i++)
		{
			if (i < n)
			{
				if (p%n == k)
				{
					p = p - p / n - p%n;
					y++;
				}
				else
					break;
			}
			else
			{
				if (p <= n)
					break;
				else if (p%n != k)
					break;
				else
					y++;
			}
		}
	}
	printf("%d", m - 1);
	return 0;
}