int main()
{
	char str[500];
	int i, j, num[500] = {0}, len, k, m, max = 0;	
	cin >> m >> str;
	len = strlen(str);
	for (i = 0; i <= len - m; i++)
	{
		for (j = i + 1; j <= len - m; j++)
		{
			for (k = 0; k < m; k++)
				if (str[i + k] != str[j + k])
					break;
			if (k == m)
				num[i]++;
		}
	}
	for (i = 0; i <= len - m; i++)
		if (max < num[i] + 1)
			max = num[i] + 1;
	if (max < 2)
		cout << "NO" << endl;
	else
	{
		cout << max << endl;
		for (i = 0; i <= len - m; i++)
			if (max == num[i] + 1)
			{
				for (k = 0; k < m; k++)
					cout << str[i + k];
				cout << endl;
			}
	}
	return 0;
}
	