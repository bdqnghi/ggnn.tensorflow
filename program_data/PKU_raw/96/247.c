int main()
{
	int num[105] = {0}, a[105] = {0}, b = 0, sum, i = 0, n;
	char c;
	while ((c = cin.get()) != '\n')
	{
		num[i] = c - '0';
		i++;
	}
	n = i;
	if (n < 3)
	{
		if (n == 1)
		{
			sum = num[0];
		}
		else
		{
			sum = num[0] * 10 + num[1];
		}
		cout << sum / 13 << endl;
		cout << sum % 13 << endl;
	}
	else
	{
		sum = num[0] * 100 + num[1] * 10 + num[2];
		for (int i = 3; i < n; i++)
		{
			a[i-1] = sum / 13;
			sum = sum % 13 * 10 + num[i];
			b = sum % 13;
		}
		a[n-1] = sum / 13;
		for (int i = n - 1; i > 1; i--)
		{
			a[i-1] += a[i] / 10;
			a[i] = a[i] % 10;
		}
		for (int i = 1; i < n; i++)
		{
			if (a[1] == 0 && i == 1)
				continue;
			cout << a[i];
		}
		cout << endl;
		cout << b << endl;
	}

	return 0;
}
