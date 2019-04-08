int main()
{
	int n, len, i, j, a[555], max = -1;
	char ch[555], ch1[555][5];
	for (i = 0; i < 555; i++)
		a[i] = 1;
	cin >> n;
	cin.get();
	cin.getline(ch,555);
	len = strlen(ch);
	for (i = 0; i < 555; i++)
	{
		for (j = 0; j < 4; j++)
			ch1[i][j] = '#';
		ch1[i][4] = 0;
	}
	for (i = 0; i < len - n + 1; i++)
	{
		for (j = i; j < i + n; j++)
		{
			ch1[i][j-i] = ch[j];
		}
	}
	for (i = 0; i < len - n + 1; i++)
	{
		for (j = i + 1; j < len - n + 1; j++)
		{
			if (strcmp(ch1[i], ch1[j]) == 0)
				a[i]++;
		}
	}
	for (i = 0; i < len - n + 1; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	for (i = 0; i < len - n + 1; i++)
	{
		if (max < a[i])
			max = a[i];
	}
	if (max>1)
	{
		cout << max << endl;
		for (i = 0; i < len - n + 1; i++)
		{
			if (a[i] == max)
			{
				for (j = 0; j < n-1; j++)
					cout << ch1[i][j];
				if (j==n-1)
					cout << ch1[i][j] << endl;
			}

		}
	}
	else
		cout << "NO";
	
	return 0;
}