int main()
{
	int m, book[1002], i, cnt[26] = {0}, l, j, n = 0;
	char name[1002][27], a, max ;
	cin >> m;
	for (i = 0; i < m; i++)
	{
		cin >> book[i];
		cin >> name[i];
		l = strlen(name[i]);
		for (j = 0; j < l; j++)
		{
			a = name[i][j];
			cnt[a - 'A']++;
		}
	}
	for (i = 0; i < 26; i++)
		{
			if (cnt[i] > n)
			{
				n = cnt[i];
				max = i + 'A';
			}
		}
		cout << max << endl;
		cout << n << endl;
		for (i = 0; i < m; i++)
		{
			l = strlen (name[i]);
			for (j = 0; j < l; j++)
			{
				if (name[i][j] == max)
				{
					cout << book[i] << endl;
					break;
				}
			}
		}
	return 0;
}