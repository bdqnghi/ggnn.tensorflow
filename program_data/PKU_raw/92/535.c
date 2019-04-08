
int s[1001][1000];

int MAX(int a, int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int comp(int a, int b)
{
	if(a > b)
		return 200;
	else if(a < b)
		return -200;
	else
		return 0;
}

void main()
{
	int n;
	int i, j;
	int tmp;
	int a[1000], b[1000];

	for(scanf("%d", &n); n > 0; scanf("%d", &n))
	{
		for(i = 0; i < n; ++i)
			scanf("%d", &a[i]);
		for(i = 0; i < n; ++i)
			scanf("%d", &b[i]);
		for(i = 0; i < n - 1; ++i)
			for(j = 0; j < n - i - 1; ++j)
				if(a[j] < a[j + 1])
				{
					tmp = a[j];
					a[j] = a[j + 1];
					a[j + 1] = tmp;
				}
		for(i = 0; i < n - 1; ++i)
			for(j = 0; j < n - i - 1; ++j)
				if(b[j] < b[j + 1])
				{
					tmp = b[j];
					b[j] = b[j + 1];
					b[j + 1] = tmp;
				}
		for(i = 0; i < n; ++i)
			s[0][i] = 0;
		for(i = 1; i <= n; ++i)
			for(j = 0; j <= n - i; ++j)
				s[i][j] = MAX(s[i - 1][j] + comp(a[i - 1], b[j + i - 1]), s[i - 1][j + 1] + comp(a[i - 1], b[j]));
		printf("%d\n", s[n][0]);
	}
}
