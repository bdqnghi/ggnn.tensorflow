
//**********************
//* 2.cpp 



int main()
{
	int m, n, i, j, k = 1, num = 0;
	char ch[102][102] = {0};
	cin >> m;
	for (i = 1; i < m + 1; i++)
	{
		for (j = 1; j < m + 1; j++)
		{
			cin >> ch[i][j];
			if (ch[i][j] == '@')
				ch[i][j] = 1 + '0';
		}
	}
	cin >> n;
	while (k <= n)
	{
		for(i = 1; i < m + 1; i++)
		{
			for (j = 1; j < m + 1; j++)
			{
				if (ch[i][j] == k + '0')
				{
					if (ch[i][j + 1] == '.')
						ch[i][j + 1] = k + 1 + '0';
					if (ch[i][j - 1] == '.')
						ch[i][j - 1] =  k + 1 + '0';
					if (ch[i -1][j] == '.')
						ch[i - 1][j] = k + 1 + '0';
					if (ch[i + 1][j] == '.')
						ch[i + 1][j] = k + 1 + '0';
				}
			}
		}
		k++;
	}
	for (i = 1; i < m + 1; i++)
	{
		for (j = 1; j < m + 1; j++)
		{
			if (ch[i][j] <= n + '0' && ch[i][j] >= 1 + '0')
				num++;
		}
	}
	cout << num << endl;
	return 0;
}