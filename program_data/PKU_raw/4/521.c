int main()
{
	int a[100][100], row, col, i, j, p, q;
	cin >> row >> col;
	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++) 
			cin >> a[i][j];
	for (i = 0; i < col; i++)
	{
		p = 0;
		q = i;
		do 
		{
			cout << a[p][q] << endl;
			p++;q--;
		} while (q >= 0 && p < row);
	}
	for (i = 1; i < row; i++)
	{
		p = i;
		q = col - 1;
		do 
		{
			cout << a[p][q] << endl;
			p++;q--;
		} while (p < row && q >= 0);
	}
	return 0;
}