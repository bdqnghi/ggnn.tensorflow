int main()
{
	int row , col , i , j;
	int a[100][100];
	cin >> row >> col;
	for (i = 0 ; i <= row - 1 ; i++)
	{
		for (j = 0 ; j <= col - 1 ; j++)
		{
			cin >> a[i][j];
		}
	}
	if (col >= row)
	{
		for (j = 0 ; j<= row - 1 ; j++)
		{
			for (i = 0 ; i <= j ; i++)
			{
				cout << a[i][j-i] << endl;
			}
		}
		for (j = row ; j <= col - 1 ; j++)
		{
			for (i = 0 ; i <= row -1 ; i++)
			{
				cout << a[i][j - i] << endl;
			}
		}
		for (i = 1 ; i <= row - 1 ; i++)
		{
			for (j = col - 1 ; j >= col + i - row ; j--)
			{
				cout << a[i + col - 1 - j][j] << endl;
			}
		}
	}
	else if (col < row)
	{
		for  (j = 0 ; j <= col - 1 ; j ++)
		{
			for (i = 0 ; i <= j ; i++)
			{
				cout << a[i][j-i] << endl;
			}
		}
		for ( i = 1 ; i <= row - col - 1; i++)
		{
			for (j = col - 1 ; j >= 0 ; j--)
			{
				cout << a[ i + col - j - 1][j] << endl;
			}
		}
		for (i =  row - col ; i <= row - 1 ; i++)
		{
			for (j = col - 1 ; j >= col - row + i ; j--)
			{
				cout << a[i + col - 1 - j][j] <<endl;
			}
		}
	}
	return 0;
}