//*******************************
// ???? ??????????
// ?? ? ??? 1300012972
// ?? ? 2013.11.6
//*******************************



int main()
{
	int step = 0, row, col, x[4] = {0, 1, 0, -1}, y[4] = {1, 0, -1, 0}, array[100][100], i, j, acc[100][100] = {0}, d = 0;

	cin >> row >> col;

	for (i = 0; i < row; i++)
		for (j = 0; j < col; j++)
			cin >> array[i][j];

	i = 0;
	j = -1;

	while (step < row * col)
	{
		i += x[d];
		j += y[d];

		if (i >= 0 && i < row  && j >= 0 && j < col  && acc[i][j] == 0)
		{
			cout << array[i][j] << endl;
			acc[i][j] = 1;
			step++;
		}
		else 
		{
			i -= x[d];
			j -= y[d];
			d = (d + 1) % 4;
		}
	}

	return 0;
}
