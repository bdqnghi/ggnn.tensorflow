
void main()
{
	int n, m;
	int i, j, k;
	int num;
	int a[500];

	scanf("%d%d", &n, &m);
	while((n > 0) && (m > 0))
	{
		for(i = 1; i <= n; i++)
			a[i] = 0;
		num = 0;
		for(i = 1; i < n; i++)
		{
			for(j = 1; j <= m; j++)
			{
				num = num % n + 1;
				while(a[num] == 1)
					num = num % n + 1;
			}
			a[num] = 1;
		}
		for(i = 1; i <= n; i++)
			if(a[i] == 0)
				printf("%d\n", i);
		scanf("%d%d", &n, &m);
	}
}