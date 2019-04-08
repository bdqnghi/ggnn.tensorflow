
int main()
{
	int n, m = 1, p = 1;
	double a[50],b[50],c[50],t1, t2;
	char s[50][10], w[10] = "male", f[10] = "female";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> s[i] >> a[i];
		if (strcmp(s[i],w) == 0)
		{
			b[m++] = a[i];
		}
		else
		{
			c[p++] = a[i];
		}
	}
	for (int i = 1; i <= m - 1; i++)
	{
		for (int j = 1; j <= m - i; j++)
		{
			if (b[j] > b[j + 1])
			{
				t1 = b[j];
				b[j] = b[j + 1];
				b[j + 1] = t1;

			}
		}

	}
	for (int i = 1; i <= p - 1; i++)
		{
			for (int j = 1; j <= p - i; j++)
			{
				if (c[j] < c[j + 1])
				{
					t2 = c[j];
					c[j] = c[j + 1];
					c[j + 1] = t2;

				}
			}

		}
	cout << fixed << setprecision(2);
	for (int i = 2; i <= m; i++)
	{
		cout << b[i] << " ";
	}
	for (int j = 1; j <= p - 1; j++)
	{
		cout << c[j];
		if (j != p - 1)
			cout << " ";
	}
	cout << endl;
	return 0;
}
