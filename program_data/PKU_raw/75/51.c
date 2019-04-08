//??????
int a[1001] = {0}, b[1001] = {0};
int main()
{
	int i = 0;
	char str[100001];
	cin >> str;
	int l = strlen(str);
	int j1 = 0, j2 = 0;
	while (j1 < l)
	{
		if (str[j1] >= '0' && str[j1] <= '9')
		{
			i++;
			for (j2 = j1; str[j2] >= '0' && str[j2] <= '9'; j2 ++)
			{
				a[i] = 10 * a[i] + str[j2] - '0';
			}
			j1 = j2;
		}
		else
			j1++;
	}
	int n = i;
	cin >> str;
	l = strlen(str), j1 = 0, j2 = 0, i = 0;
	while (j1 < l)
	{
		if (str[j1] >= '0' && str[j1] <= '9')
		{
			i++;
			for (j2 = j1; str[j2] >= '0' && str[j2] <= '9'; j2 ++)
			{
				b[i] = 10 * b[i] + str[j2] - '0';
			}
			j1 = j2;
		}
		else
			j1++;
	}
	int k = 0, max = 0;
	for (k = 0; k <= 1000; k++)
	{
		int sum = 0;
		for (i = 1; i <= n; i++)
		{
			if (k >= a[i] && k < b[i])
				sum++;
		}
		if (sum > max)
			max = sum;
	}
	cout << n << ' ' << max << endl;
	return 0;
}