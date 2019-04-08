void zengjia();
int num[9][9] = {0};

int main()
{
	int m, n, i, j;
	cin >> m >> n;
	num[4][4] = m;
	for (i = 0; i < n; i++)
		zengjia();
	for (i = 0; i < 9; i++)
	{
		cout << num[i][0];
		for (j = 1; j < 9; j++)
			cout << " " << num[i][j];
		cout << endl;
	}
	return 0;
}
void zengjia()
{
	int num2[9][9] = {0};
	int i, j;
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
		{
			if (num[i][j] > 0)
			{
			if (i > 0)
				num2[i - 1][j] = num[i][j] + num2[i - 1][j];
			if (i < 8)
				num2[i + 1][j] = num[i][j] + num2[i+ 1][j];
			if (j > 0)
				num2[i][j - 1] = num[i][j] + num2[i][j - 1];
			if (j < 8)
				num2[i][j + 1] = num[i][j] + num2[i][j + 1];
			if (i > 0 && j > 0)
				num2[i - 1][j - 1] = num[i][j] + num2[i - 1][j - 1];
			if (i < 8 && j > 0)
				num2[i + 1][j - 1] = num[i][j] + num2[i + 1][j - 1];
			if (i > 0 && j < 8)
				num2[i - 1][j + 1] = num[i][j] + num2[i - 1][j + 1];
			if (i < 8 && j < 8)
				num2[i + 1][j + 1] = num[i][j] + num2[i + 1][j + 1];
			num2[i][j] = num[i][j] * 2 + num2[i][j];
			}
		}
	for (i = 0; i < 9; i++)
		for (j = 0; j < 9; j++)
			num[i][j] = num2[i][j];
	return;
}