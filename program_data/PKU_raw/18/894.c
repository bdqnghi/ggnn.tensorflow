int n = 0, a[101][101] = {{0}}, sum = 0, k = 0;
void zerorow(int k)
{
	int min = 0;
	for (int i = 0; i < k; i ++)//every row
	{
		min = a[i][0];
		for (int j = 1; j < k; j ++)//find min
			if (a[i][j] < min)
				min = a[i][j];
		if (min)
			for (int j = 0; j < k; j ++)//to zero
				a[i][j] -= min;
	}
}
void zerocol(int k)
{
	int min = 0;
	for (int i = 0; i < k; i ++)//every col
	{
		min = a[0][i];
		for (int j = 1; j < k; j ++)//find min
			if (a[j][i] < min)
				min = a[j][i];
		if (min)
			for (int j = 0; j < k; j ++)//to zero
				a[j][i] -= min;
	}
}
void jian(int k)
{
	for (int i = 2; i < k; i ++)//row move up
		for (int j = 0; j < k; j ++)
			a[i - 1][j] = a[i][j];
	for (int j = 2; j < n; j ++)//col move left
		for (int i = 0; i < k - 1; i ++)
			a[i][j - 1] = a[i][j];
}
int main()
{
	cin >> n;//cin
	while(cin>>a[0][0])
	{
		sum = 0;
		for (int i = 0; i < n; i ++)
			for (int j = 0; j < n; j ++)
			{
				if (i + j)
					cin >> a[i][j];
			}
		for (k = n; k > 1; k --)
		{
			zerorow(k);
			zerocol(k);
			sum += a[1][1];
			jian(k);
		}
		cout << sum << endl;
	}
	return 0;
}