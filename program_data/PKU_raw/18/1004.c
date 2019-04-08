int x[102][102];
int (*p)[102];
int n;
void f(int k)
{
	int min, i, j;
	for (i = 0; i < n - k; i ++)
	{
		min = 10000;
		for (j = 0; j < n - k; j ++)
			if (*(*(p + i) + j) < min)
				min = *(*(p + i) + j);
		for (j = 0; j < n - k; j ++)
			*(*(p + i) + j) -= min;
	}
	for (i = 0; i < n - k; i ++)
	{
		min = 10000;
		for (j = 0; j < n - k; j ++)
			if (*(*(p + j) + i) < min)
				min = *(*(p + j) + i);
		for (j = 0; j < n - k; j ++)
			*(*(p + j) + i) -= min;
	}
}
int main()
{
	int i, j, k, sum;
	p = x;
	cin >> n;
	for (int t = 0; t < n; t ++)
	{
		sum = 0;
		for (i = 0; i < n; i ++)
		for (j = 0; j < n; j ++)
			cin >> *(*(p + i) + j);
		for (k = 0; k < n - 1; k ++)
		{
			f(k);
			sum += *(*(p + 1) + 1);
			for (i = 2; i < n; i ++)
			{
				*(*(p + 0) + i - 1) = *(*(p + 0) + i);
				*(*(p + i - 1) + 0) = *(*(p + i) + 0);
			}
			for (i = 2; i < n; i ++)
				for (j = 2; j < n; j ++)
					*(*(p + i - 1) + j - 1) = *(*(p + i) + j);
		}
		cout << sum << endl;
	}
	return 0;
}