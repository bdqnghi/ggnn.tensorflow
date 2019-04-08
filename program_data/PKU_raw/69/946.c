int main()
{
	int i, j;
	char x[1000], y[1000];
	cin >> x >> y;
	int len1 = strlen(x);
	int len2 = strlen(y);
	if (len1 == 1 && len2 == 1)
		cout << 0;
	int sum[1000];
	for (i = 0; i < 1000; i ++)
		sum[i] = 0;
	for (i = len1 - 1, j = len2 - 1; i >= 0 && j >= 0; i --, j --)
	{
		int k = x[i] + y[j] - 2 * '0';
		sum[len1 - i - 1] += k;
	}
	if (len1 > len2)
	{
		for (i = len1 - len2 - 1; i >= 0; i --)
			sum[len1 - i - 1] += x[i] - '0';
	}
	else if (len1 < len2)
	{
		for (i = len2 - len1 - 1; i >= 0; i --)
			sum[len2 - i - 1] += y[i] - '0';
	}
	for (i = 0; i < 999; i ++)
		if (sum[i] > 9)
		{
			sum[i + 1] += sum[i] / 10;
			sum[i] = sum[i] % 10;
		}
	i = 999;
	while (sum[i] == 0)
		i --;
	for (j = i; j >= 0; j --)
		cout << sum[j];
	cout << endl;
	return 0;
}