//********************************
//*???2.???????? **
//*?????? 1300017623 **
//*???2013.11.1  **
//********************************
int main()
{
	int a[100][100];
	int row, col, i, j;
	cin >> row >> col;
	int i1 = 0, i2 = row - 1, j1 = 0, j2 = col - 1;
	for (i = 0; i < row ; i++)
		for (j = 0; j < col; j++)
			cin >> a[i][j];
	while (1)
	{
		for (j = j1; j <= j2; j++)
			cout << a[i1][j] << endl;
		i1++;
		if (i1 > i2)
			break;
		for (i = i1; i <= i2; i++)
			cout << a[i][j2] << endl;
		j2--;
		if (j1 > j2)
			break;
		for (j = j2; j >= j1; j--)
			cout << a[i2][j] << endl;
		i2--;
		if (i1 > i2)
			break;
		for (i = i2; i >= i1; i--)
			cout << a[i][j1] << endl;
		j1++;
		if(i1 > i2)
			break;
	}

		return 0;
}