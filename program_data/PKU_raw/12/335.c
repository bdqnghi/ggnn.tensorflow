int main()
{
	int a[17];
	int i, j, n, nn, count;
	nn=0;
	while(cin >> a[1] && a[1] != -1)
	{
		nn++;
		count = 0;
		for (n = 2; n <= 16; n++)
		{
			cin >> a[n];
			if (a[n] == 0)
				break;
		}
		for (i = 1; i <= n - 1; i++)
		{
			if (a[i] % 2 == 0)
				for (j = 1; j <= n - 1; j++)
					if (a[j] * 2 == a[i])
						count++;
		}
		cout << count << endl;
	}
	return 0;
}