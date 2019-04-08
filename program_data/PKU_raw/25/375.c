int main()
{	
	int num[101][100];
	int i, j, n;
	for (i = 0; i < 100; i ++)
		for (j = 0; j < 101; j ++)
			num[j][i] = 0;
	num[0][0] = 1;
	cin >> n;
	for (i = 1; i <= n; i ++)
	{
		for (j = 0; j < 90; j ++)
		{
			num[i][j] += 2 * num[i - 1][j];
			if (num[i][j] > 9)
			{
				num[i][j + 1] += num[i][j] / 10;
				num[i][j] = num[i][j] % 10;
			}
		}
	}
	i = 90;
	while (num[n][i] == 0)
		i --;
	for (j = i; j >= 0; j --)
		cout << num[n][j];
	cout << endl;
	return 0;
}