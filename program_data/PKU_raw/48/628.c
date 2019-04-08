

int vir[11][11] = {0}, m, n, b[11][11], i = 0, j = 0;

int num(int, int, int);


int main()
{
	int t;
	
	cin >> m >> n;
	vir[5][5] = m;
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			b[i][j] = num(n, i ,j );
		}
	}
	for (i = 1; i < 10; i++)
	{
		for (j = 1; j < 9; j++)
		{
			cout << b[i][j] << " ";
		}
		cout << b[i][9] << endl;
	}
	cin >> i;
	return 0;
}

int num(int n, int i, int j)
{
	if(i < 1 || j < 1 || n < 0 || i > 9 || j > 9)
		return 0;
	if(n == 0)
	{
		if (i == 5 && j == 5)
			return m;
		else
			return 0;
	}
	return (num(n - 1, i - 1, j- 1) + num(n - 1, i - 1, j) + num(n - 1, i - 1, j + 1) + num(n - 1, i, j - 1) + num(n - 1, i, j) * 2 + num(n - 1, i, j + 1) + num(n - 1, i + 1, j - 1) + num(n - 1, i + 1, j) + num(n - 1, i + 1, j + 1));
}
