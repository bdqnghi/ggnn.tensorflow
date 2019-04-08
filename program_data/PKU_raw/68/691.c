int main ()
{
	int n, i, j, k, f;
	cin >> n;
	for (i = 6; i <= n; i += 2)
	{
		f = 0;
		for (j = 3; j + j <= i; j += 2)
		{
			for(k = 3; k * k <= j; k += 2)
			{
				if (j % k == 0)
					break;
			}
			if ( k * k > j)
			{
				for(k = 3; k * k <= i - j; k += 2)
				{
					if ((i - j) % k == 0)
						break;
				}
				if (k * k > i - j)
				{
					cout << i << '=' << j << '+' << i - j << endl;
					f = 1;
				}
			}
			if (f == 1)
				break;
		}

	}
	return 0;
}

