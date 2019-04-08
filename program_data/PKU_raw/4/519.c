int main()
{
	int i, j, row, col, n = 0;
	int a[100 + 10][100 + 10] = {0};
	cin >> row >> col;
	for (i = 0; i < row; i ++)
		for (j = 0; j < col; j ++)
		cin >> a[i][j];
	i = 0; j = 0;
	for (int begin = 0; begin < col; begin ++)
	{
		i = 0; j = begin;
		while(j >= 0 && i < row) cout << a[i ++][j --] << endl;
	}
	for (int begin = 1; begin < row; begin ++)
	{
		i = begin, j = col - 1;
		while(i < row && j >= 0) cout << a[i ++][j --] << endl;
	}
	return 0;
}