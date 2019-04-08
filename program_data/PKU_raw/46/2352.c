/*************************
 ***??:??? 1200012776
 ***????:????????
 ***??:2012?10?30?
 *************************/
int main()
{
	int row, col, sub_rowS, sub_rowE, sub_colS, sub_colE, times = 0, i, j, k, matrix[100][100];
	cin >> row >> col;	//??????
	for (i = 0; i < row; i++)
	{
		for(j = 0; j < col; j++)
		{
			cin >> matrix[i][j];
		}
	}
	for (sub_rowS = 0, sub_rowE = row - 1, sub_colS = 0, sub_colE = col -1; ; sub_rowS++, sub_rowE--, sub_colS++, sub_colE--)	//???????????
	{
		for (i = sub_colS; i <= sub_colE; i++)
		{
			cout << matrix[sub_rowS][i] << endl;	//????????
			times++;
		}
		for (i = sub_rowS + 1; i <= sub_rowE; i++)
		{
			cout << matrix[i][sub_colE] << endl;	//??????sub_colE??sub_rowE-1?
			times++;
		}
		if (times == row * col)	//????????,??
			break;
		for (i = sub_colE - 1; i >= sub_colS; i--)
		{
			cout << matrix[sub_rowE][i] << endl;	//??????sub_rowE??sub_colE-1?
			times++;
		}
		for (i = sub_rowE - 1; i > sub_rowS; i--)
		{
			cout << matrix[i][sub_colS] << endl;	//??????????sub_rowE-2?
			times++;
		}
		if (times == row * col)	//????????,??
			break;
	}
	return 0;
}