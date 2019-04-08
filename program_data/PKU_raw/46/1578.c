/* title:???????? *
 * author:???*
 * time:2011.10.28*/


   


int main()
{
	int array[100][100];
	int row, col, i, j, k, h, m = 0, r1, r2, n = 0;
	cin >> row >> col;
	r1 = row;
	r2 = col;
	for(i = 0; i < row; i++)
		for(j = 0; j < col; j++)
		{
			cin >> array[i][j];
		}
	for(m = 0; m <= r2 / 2 && m <= r1 / 2; m++)
	{
		for(j = m; j < col; j++)
		{
			n++;
			if(n > r1 * r2)
				break;
			cout << array[m][j] << endl;
		}
		for(i = m + 1; i < row; i++)
		{
			n++;
			if(n > r1 * r2)
				break;
			cout << array[i][col - 1] << endl;
		}
		for(k = col - 2; k >= m; k--)
		{
			n++;
			if(n > r1 * r2)
				break;
			cout << array[row - 1][k] << endl;
		}
		for(h = row - 2; h > m; h--)
		{
			n++;
			if(n > r1 * r2)
				break;
			cout << array[h][m] << endl;
		}
		row = row - 1;
		col = col - 1;
	}
	return 0;
}

