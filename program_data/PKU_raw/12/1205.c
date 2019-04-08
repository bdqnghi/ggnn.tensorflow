int main()
{
	int i, j, n, x[15], count;
	while (1)
	{
		count = 0;
		for (n = 0; ; n++)
		{
			cin >> x[n];
			if (x[n] <= 0) break;
		}
		if (x[n] == -1) break;
		for (i = 0; i < n; i++)
			for(j = 0; j < n; j++)
			{
				if (j == i) continue;
				if (x[j] == 2 * x[i]) count++;
			};
		cout << count << endl;
	}
	return 0;
}