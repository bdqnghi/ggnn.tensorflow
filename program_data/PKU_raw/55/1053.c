int main()
{
	double a, b;
	int s = 0, i, l, j;
	int c[100];
	char n[100];
	cin >> a >> n >> b;
	l = strlen(n);
	for (i = l - 1; i >= 0; i --)
	{
		if (n[i] >= 48 && n[i] <= 57)
		{
			s = s + (n[i] - '0') * pow(a,(double)(l - i - 1));
		}
		if (n[i] >= 65 && n[i] <= 90)
		{
			s = s + (n[i] - 55) * pow(a,(double)(l - i - 1));
		}
		if (n[i] >= 97 && n[i] <= 122)
		{
			s = s + (n[i] - 87) * pow(a,(double)(l - i - 1));
		}
	}
	if (s == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	if (b <= 10)
	{
		for (i = 0; ;i ++)
		{
			c[i] = s % (int)b;
			s = s / (int)b;
			if (s < b)
			{
				c[i + 1] = s;
				break;
			}
		}
		for (j = i + 1; j >= 0; j --)
		{
			cout << c[j];
		}
	}
	else
	{
		memset(n, 0, sizeof(n));
		for (i = 0; ;i ++)
		{
			if ((s % (int)b) > 9)
			{
				n[i] = (char)(s % (int)b + 55);
			}
			else
			{
				n[i] = (char)(s % (int)b + '0');
			}
			s = s / (int)b;
			if (s < b)
			{
				if (s > 9)
				{
					n[++ i] = (char)(s + 55);
				}
				else
				{
					n[++ i] = (char)(s + '0');
				}
				break;
			}

		}
		for (j = i; j >= 0; j --)
		{
			cout << n[j];
		}
	}
	cout << endl;
	return 0;
}