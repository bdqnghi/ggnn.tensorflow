

int zhongliu(int, int, int, int);
int num[1001][1001], n;
int main()
{
	int i, j, judge = 0, sum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
			cin >> num[i][j];
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (num[i][j] == 255)
				judge = zhongliu(i, j, 0 ,1) + zhongliu(i, j, 0, -1) + zhongliu(i, j, 1, 0) + zhongliu(i, j, -1, 0);
			if (judge == 4)
			{
				sum++;
			}
			judge = 0;
		}
	}
	cout << sum;
	cin >> i;
	
	return 0;
}

int zhongliu(int x, int y, int a, int b)
{
	if (x < 0 || y < 0 || x >= n || y >= n)
		return 0;
	if (num[x][y] == 0)
		return 1;
	else
		return zhongliu(x + a, y + b, a, b);
}

