/********************************************
 *@file                                     *
 *@author ??                              *
 *@date   2014-1-15                         *
 *@description                              *
 *?????????????????        *
 ********************************************
 */
int main()
{
	int col, row, array[110][110]= {0},i, j, p = 0, q = 0, sum, count = 0;
	cin >> row >> col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			cin >> array[i][j];
		}
	}
	sum = row * col;
	while (count != sum)
	{
		if (q != 0 && p != row - 1)
		{
			cout << array[p][q] << endl;
			count++;
			p++;
			q--;
			continue;
		}
		if (q == 0 && p != row - 1)
		{
			cout << array[p][q] << endl;
			count++;
			if (q != col - 2)
			{
				q = p + 1;
				p = 0;
				if (q > col - 1)
				{
				p = q - col + 1;
				q = col - 1;
				}
			}
			else if (q == col - 2)
			{
				p = p - col + 2;
				q = col - 1;
			}
			continue;
		}
		if (p == row - 1)
		{
			cout << array[p][q] << endl;
			count++;
			q = p + q + 1;
			p = 0;
			if (q > col - 1)
			{
				p = q - col + 1;
				q = col - 1;
			}
		}
	}
	return 0;
}