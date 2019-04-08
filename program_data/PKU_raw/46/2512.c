int main ()
{
	int array[100][100];										//??????array
	int row, col;												//?????
	cin >> row >> col;											//?????
	for ( int i = 0; i < row; i ++ )							//????
		for ( int j = 0; j < col; j ++ )
			cin >> array[i][j];
	int startrow = 0, startcol = 0;								//??????????
	int sum = 0;												//???????????
	while (true)												//?????????????
	{
		for ( int i = startcol; i < col-startcol; i ++ )
		{cout << array[startrow][i]<<endl;sum ++;}
		if ( sum == row * col ) break;
		for ( int i = startrow + 1; i < row-startrow; i ++ ) 
		{cout << array[i][col-startcol-1]<<endl;sum ++;}
		if ( sum == row * col ) break;
		for ( int i = col-startcol-2; i > startcol; i -- ) 
		{cout << array[row-startrow-1][i]<<endl;sum ++;}
		if ( sum == row * col ) break;
		for ( int i = row-startrow-1; i > startrow; i -- ) 
		{cout << array[i][startcol]<<endl;sum ++;}
		if ( sum == row * col ) break;
		startrow ++;											//????????????????
		startcol ++;
	}
	return 0;
}