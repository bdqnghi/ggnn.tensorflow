
int c[1010][1010];

int maximum(int x, int y)
{
	if (x > y)
		return x;
	else return y;
}

int cmp(const void * x, const void * y)
{
	int * a = (int *)x;
	int * b = (int *)y;
	if (*a > *b)
		return 1;
	else return -1;
}

int main()
{
	int n;
	int a[1010];
	int b[1010];
	int i, j, k;
	int max;
	int val;

	for (i = 0; i < 1010; i++)
		for (j = 0; j < 1010; j++)
			c[i][j] = -100000;
	while (1)
	{
		scanf("%d", &n);
		if (n == 0)
			break;
		for (i = 0; i < n; i++)
			scanf("%d", &a[i]);
		for (i = 0; i < n; i++)
			scanf("%d", &b[i]);
		qsort(a, n, sizeof(int), cmp);
		qsort(b, n, sizeof(int), cmp);
		j = 0;
		for (i = 0; i < n; i++)
			for (j = 0; j <= i; j++)
			{
				c[i][j] = -10000;
				if (j == 0)
				{
					if (a[i] > b[j])
						c[i][j] = 1;
					else if (a[i] == b[j])
						c[i][j] = 0;
				}
				else {
					if (a[i] < b[j])
						c[i][j] = c[i-1][j];
					if (a[i] == b[j])
						c[i][j] = maximum(c[i-1][j-1], c[i-1][j]);
					if (a[i] > b[j])
						c[i][j] = c[i-1][j-1] + 1;
				}
			}
		max = -100000;
		for (i = 0; i< n; i++)
			for (j = 0; j < n; j++)
				if (max < c[i][j] - (n - j - 1))
					max = c[i][j] - (n - j - 1);
		if (max <= -5000)
			max = -n;
		printf("%d\n", max * 200);
	}
}