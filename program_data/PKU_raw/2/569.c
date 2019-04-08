
int main()
{
	int book[1000], m, i, j, k, length, max = 0, name[500] = {0}; 
	char writer[1000][26], name1;
	cin >> m;
	for (i = 0; i < m; i++)
		cin >> book[i] >> writer[i];
	for (k = 'A'; k <= 'Z'; k++)
	{
		for (i = 0; i < m; i++)
		{
			length = strlen(writer[i]);
			for (j = 0; j < length; j++)
				if (writer[i][j] == k)
					name[k]++;
		}
		if (name[k] > max)
		{
			max = name[k];
			name1 = k;
		}
	}
	cout << name1 << endl;
	cout << max << endl;
	for (i = 0; i <= m; i++)
	{
		length = strlen(writer[i]);
		for (j = 0; j <= length; j++)
			if (writer[i][j] == name1)
				cout << book[i] << endl;
	}

	return 0;
}
	