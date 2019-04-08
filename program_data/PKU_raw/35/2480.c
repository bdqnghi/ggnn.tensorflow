int main()
{
    int m, n, a[100][100], i, j, k, l, M, N, O, s, flag=0;
	scanf("%d,%d", &m, &n);
	O = 0;
	s = m*n;
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i<m; i++)
	{
		for (j = 0; j<n; j++)
		{
			M = 0;
			for (k = 0; k<n; k++)
			{
				if (a[i][j] >= a[i][k])
				{
					M = M + 1;
				}
			}
			if (M == n)
			{
				N = 0;
				for (l = 0; l<m; l++)
				{
					if (a[i][j] <= a[l][j])
					{
						N = N + 1;
					}
				}
			}
			if (N == m)
			{
				printf("%d+%d\n", i, j);
				flag = 1;
				break;
			}
			else
			{
				O = O + 1;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (O == s)
	{
		printf("No");
	}
	return 0;
}


