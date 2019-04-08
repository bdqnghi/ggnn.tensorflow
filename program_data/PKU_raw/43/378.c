int main()
{
	int m, i, j, p, q;
	cin >> m;
	if (m == 6)
	{
		cout << 3 << " " << 3 << endl;
	}
	if (m == 8)
	{
		cout << 3 << " " << 5 << endl;
	}
	if (m == 10)
	{
		cout << 3 << " " << 7 << '\n' << 5 << " " << 5 << endl;
	}
	if (m == 12)
	{
		cout << 5 << " " << 7 << endl;
	}
	if (m >= 14)
	{
		for (i = 3; i <= m / 2; i = i + 2)
		{
			if ((i == 3) || (i == 5) || (i == 7))
			{
				j = m - i;
				for (q = 3; q <= sqrt(j); q = q + 2)
				{
					if (j % q == 0)
					{
						break;
					}
					else if ((j % q != 0) && (q <= sqrt(j)) && (q + 2 > sqrt(j)))
					{
						cout << i << " " << j << endl;
					}
				}
			}
			for (p = 3; p <= sqrt(i); p = p + 2)
			{
				if (i % p == 0)
				{
					break;
				}
				else if ((i % p != 0) && (p <= sqrt(i)) && (p + 2 > sqrt(i)))
				{
					j = m - i;
					for (q = 3; q <= sqrt(j); q = q + 2)
					{
						if (j % q == 0)
						{
							break;
						}
						else if ((j % q != 0) && (q <= sqrt(j)) && (q + 2 > sqrt(j)))
						{
							cout << i << " " << j << endl;
						}
					}
				}
			}
		}
	}
	return 0;
}