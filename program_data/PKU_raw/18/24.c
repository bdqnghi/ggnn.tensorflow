/*????:?????????
 *??:???
 *??:2010/12/1
 *??:1000010449
*/
int a[100][100];
int change(int m)
{
	int i, j, k = 0, min, value;

	if (m == 1)
		return 0;

	for (i = 0; i < m; i++)	//????
	{
		min = a[i][0];
		for (j = 0; j < m; j++)	//????
			if (a[i][j] < min)
				min = a[i][j];
		for (j = 0; j < m; j++)
			a[i][j] -= min;
	}

	for (i = 0; i < m; i++)	//????
	{
		min = a[0][i];
		for (j = 0; j < m; j++)	//????
			if (a[j][i] < min)
				min = a[j][i];
		for (j = 0; j < m; j++)
			a[j][i] -= min;
	}

	value = a[1][1];	//??a[1][1]??
	//??
	for (i = 1; i < m - 1; i++)	//??
		for (j = 0; j < m; j++)	//??
			a[i][j] = a[i + 1][j];	//?????

	for (j = 1; j < m - 1; j++) //??
		for (i = 0; i < m - 1; i++) //??
			a[i][j] = a[i][j + 1];	//?????

	return value + change(m - 1);
}
int main()
{
	int n, i, j;
	
	cin >> n;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n * n; j++)
			cin >> a[j / n][j % n];

		cout << change(n) << endl;
	}
	return 0;
}
