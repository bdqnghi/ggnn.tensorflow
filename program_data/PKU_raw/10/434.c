

int main()
{
	int i, j, n, num[100], mark[100] = {0}, max;
	cin >> n;
	for (i = 0; i < n; i ++)
	{
		cin >> num[i];
	}
	mark[n - 1] = 1;
	for (i = n - 2; i >= 0; i --)
	{
		max = 0;
		for (j = i + 1; j < n; j ++)
		{
			if (num[j] <= num[i] && mark[j] > max)
			{
				max = mark[j];
			}
		}
		mark[i] = max + 1;
	}
	max = 0;
	for (i = 0; i < n; i ++)
	{
		if (mark[i] > max)
		{
			max = mark[i];
		}
	}
	cout << max << endl;
	return 0;
}