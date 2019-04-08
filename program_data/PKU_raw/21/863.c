



int main()
{
	int count = 0, flag = 0;
	int i, j ;
	double x = 0.0, max = 0.0, num[301], n, temp, b[301] = {0};
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> num[i];
		x = x + num[i];
	}
	x = x / n;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (num[j] > num[j + 1])
			{
				temp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		if (num[i] >= x)
			b[i] = num[i] - x;
		else
			b[i] = x - num[i];
	}
	for (i = 0; i < n; i++)
	{
		if (max < b[i])
			max = b[i];
	}
	for (i = 0; i < n; i++)
	{
		if (b[i] == max)
		{
			if (flag == 0)
			{
				cout << num[i];
				flag = 1;
			}
			else
				cout << ',' << num[i];
		}
	}
	return 0;
}