int x[9][9];
int num(int i, int j, int k)
{
	if (k == 1)
		return x[i][j];
	else
	{
		int t = num(i, j, k - 1);
		int d[3] = {-1, 0, 1}, l[3] = {-1, 0, 1};
		for (int p = 0; p < 3; p ++)
			for (int q = 0; q < 3; q ++)
				if ((i + d[p]) >= 0 && (i + d[p] <= 8) && (j + l[q] >= 0) && (j + l[q] <= 8))
					t = t + num(i + d[p], j + l[q], k - 1);
 		return t;
	}
}
int main()
{
	int i, j, m, n;
	for (i = 0; i < 9; i ++)
		for (j = 0; j < 9; j ++)
			x[i][j] = 0;
	cin >> m;
	x[4][4] = m;
	cin >> n;
	for (i = 0; i < 9; i ++)
	{
		for (j = 0; j < 8; j ++)
			cout << num(i, j, n + 1) << " ";
		cout << num(i, 8, n + 1) << endl;
	}
	return 0;
}