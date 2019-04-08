
int main()
{
	int n = 0;
	char a[10000][82] = {0};
	int b[10000] = {0};
	int i = 0;
	int j = 0;

	cin >> n;
	cin.get();
	for (i = 1; i <= n; i ++)
	{
		cin.getline(a[i],82);
	}

	for (i = 1; i <= n; i ++)
	{
		if ((a[i][0] == '_') || ((a[i][0] >= 'a') && (a[i][0] <= 'z'))
			|| ((a[i][0] >= 'A') && (a[i][0] <= 'Z')))
		{
			b[i] = 1;
			for (j = 1; j <= 82; j ++)
			{
				if (a[i][j] == '\0')
					break;
				if ((a[i][j] == '_') || ((a[i][j] >= 'a') && (a[i][j] <= 'z'))
				|| ((a[i][j] >= 'A') && (a[i][j] <= 'Z'))
				|| ((a[i][j] >= '0') && (a[i][j] <= '9')))
					b[i] = 1;
				else
				{
					b[i] = 0;
					break;
				}
			}
		}
		else
			b[i] = 0;
	}

	for (i = 1; i <= n; i ++)
		cout << b[i] << endl;

	return 0;
}