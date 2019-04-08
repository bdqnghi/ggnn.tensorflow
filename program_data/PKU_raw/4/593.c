int main()
{
	int row, col, array[100][100], i, j, k;
	cin >> row >> col;
	for( i = 0; i < row; i ++)
		for ( j = 0; j < col; j ++)
			cin >> array[i][j];
	for ( i = 0; i < col; i ++)
	{
		k = i;
		j = 0;
		while (( k >= 0 )&&( j <= row - 1 ))
		{
			cout << array[j][k] <<'\n';
			k --;
			j ++;
		}
	}
	for ( i = 1; i < row; i ++)
	{
		k = i;
		j = col - 1;
		while (( k <= row - 1 )&&( j >= 0  ))
		{
			cout << array[k][j] <<'\n';
			k ++;
			j --;
		}
	}
	return 0;
}

