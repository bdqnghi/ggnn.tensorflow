int main()
{
    char a[1000][26], t; 
	int b[1000], num[26] = {0}, n, i, j, k, max, l[1000];
	cin >> n;
	max = 0;
	for (i = 1; i <= n; i++)
	{
		cin >> b[i];
		gets(a[i]);
		l[i] = strlen(a[i]);
		for (j = 1; j <= l[i]; j++)
			num[a[i][j] - 'A']++;
	}
	for (i = 0; i <= 25; i++)
		if (num[i] > max)
		{
			max = num[i];
			t = i + 'A';
		}
	cout << t << endl;
	cout << max << endl;
	for (i = 1; i <= n; i++)
		for (j = 1; j <= l[i]; j++)
			if (a[i][j] == t)
				cout << b[i] << endl;
	return 0;
}