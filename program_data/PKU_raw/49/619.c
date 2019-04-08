int main()
{
	char a[501];
	int i, j, k, n, flag = 1;
	for (i = 0; ; i++)
	{
		cin.get(a[i]);
		if (a[i] == '\n')
			break;
	}
	n = --i;
	for (j = 1; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			if (( i + j ) > n )
				continue;
			flag = 1;
			for (k = 0; k <= (j / 2) ; k++)
			{
				if (a[i + k] != a[i + j - k])
					flag = 0;
			}
			if (flag == 1)
			{
				for (k = i; k <= (i + j); k++)
					cout << a[k];
				cout << endl;
			}
		}
	}
	return 0;
}
