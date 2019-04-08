//?? - 1134 ??
//2010?11?05?
//1000012753 ???


int main()
{
	int N, num, i, j, k;
	int a[200];

	for (k = 1; ; k++)
	{
		i = 0;

		while (1)
		{
			cin >> a[i];

			if (a[0] == -1)
				return 0;
			if (a[i] == 0)
				break;

			i++;
		}

		num = 0;

		for (i = 0; a[i] != 0; i++)
			N = i;

		for (i = 0; i <= N; i++)
		{
			for (j = i + 1; j <= N; j++)
			{
				if (a[i] == 2 * a[j] || a[j] == 2 * a[i])
					num++;
			}
		}

		cout << num << endl;
	}

	return 0;
}

