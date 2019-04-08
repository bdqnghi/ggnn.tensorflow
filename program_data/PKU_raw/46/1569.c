int main()
{
	int row, col, n = 0;
	int i, j;
	int a[100 + 10][100 + 10] = {0};
	cin >> row >> col;
	for (i = 0; i < row; i ++)
		for (j = 0; j < col; j ++)
		cin >> a[i][j];
	i = 0; j = 0;
	int buttom = row, right = col, left = 0, top = 0;
	for (;;)
	{
		while(j <= right - 1) 
		{n ++; cout << a[i][j ++] << endl;}
		if (n == col * row) break;
		j --; i ++; top ++;
		while(i <= buttom - 1) 
		{n ++; cout << a[i ++][j] << endl;}
		if (n == col * row) break;
		i --; j --; right --;
		while(j >= left) 
		{n ++; cout << a[i][j --] << endl;}
		if (n == col * row) break;
		j ++; i --; buttom --;
		while(i >= top) 
		{n ++; cout << a[i --][j] << endl;}
		if (n == col * row) break;
		i ++; j ++; left ++;
	}
	return 0;
}