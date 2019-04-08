int main()
{
	int z, q, s, l, m, i;
	char a[6];

	for (z = 1; z <= 5; z++)
	{
		for (q = 1; q <= 5; q++)
		{
			if(z == q)
				continue;
			for (s = 1; s <=5; s++)
			{
				if(s == q)
					continue;
				for (l = 1; l <= 5; l++)
				{
					if (l == s)
						continue;
					if ( z + q == s + l && z + l > s + q && z + s < q)
					{a[z] = 'z';a[q] = 'q';a[s] = 's';a[l] = 'l';m = 15 - z -q - s - l;}
				}
			}
		}
	}
	for(i = 5; i > m;i--)
	{
		cout << a[i] << " " << i * 10 << endl;
	}
	for (i = m - 1;i >= 1;i--)
	{
		cout << a[i] << " " << i * 10 << endl;
	}
	cin >> i;
	return 0;
}

