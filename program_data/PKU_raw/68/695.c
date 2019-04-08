int main()
{
	int n, i, x, k, j, l;
	cin >> n;
	for (i = 6; i <= n; i = i + 2)
	{

		for (x = 3; x <= n / 2; x = x + 2)
		{
			l = sqrt((double)x);
			for (j = 2; j <= l; j ++)
			{
				if (x % j == 0)
				{
					break;
				}
			}
			if (j != l + 1)
			{
				continue;
			}
			if ((i - x) == 2)
			{
				break;
			}
			k = sqrt((double)(i - x));
			for (j = 2; j <= k; j ++)
			{
				if ((i - x) % j == 0)
				{
					break;
				}
			}
			if (j == k + 1)
			{
				cout << i << "=" << x << "+" << i-x << endl;
				break;
			}
		}
	}
	return 0;
}