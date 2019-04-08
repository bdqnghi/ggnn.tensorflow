int b[100][100];
void circle ( int array[100][100], int row, int col )
{
	int i;
	for ( i = 0; i < col; i ++ )
		cout << array[0][i] << endl;
	for ( i = 1; i < row; i ++ )
		cout << array[i][col-1] << endl;
	for ( i = col - 2; i >= 0; i -- )
	{
		if ( row > 1 )
			cout << array[row-1][i] << endl;
	}
	for ( i = row - 2; i > 0; i -- )
	{
		if ( col > 1 )
			cout << array[i][0] << endl;
	}
}
void change ( int array[100][100], int row, int col )
{
	int i, j;
	for ( i = 0; i < row - 2; i ++ )
	{
		for ( j = 0; j < col - 2; j ++ )
		{
			b[i][j] = array[i+1][j+1];
		}
	}
}

int main ()
{
	int i, j, row, col, array[100][100], k = 0;
	cin >> row >> col;
	for ( i = 0; i < row; i ++ )
	{
		for ( j = 0; j < col; j ++ )
		{
			cin >> array[i][j];
			b[i][j] = array[i][j];
		}
	}
	if ( row > col )
	{
		for ( k = 0; k < col; k = k + 2 )
		{
			circle( b, row - k, col - k );
			change( b, row - k, col - k );
		}
	}
	else
	{
		for ( k = 0; k < row; k = k + 2 )
		{
			circle( b, row - k, col - k );
			change( b, row - k, col - k );
		}
	}
	return 0;
}

