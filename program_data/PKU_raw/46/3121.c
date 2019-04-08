int main()
{
	int row, col;
	cin >> row >> col;
	int a[row][col];
	int i, j;
	int t = 0;                             //?????t? 
	for ( i = 0; i < row; i++ )
		for ( j = 0; j < col; j++ )
			cin >> a[i][j];
	
	while ( (row > 2 * t) && (col > 2 * t) )
	{
		for ( i = t; i <= col - t - 1; i++ )
			cout << a[t][i] << endl;          //???? 
			
		for ( i = t + 1; i <= row - t - 1; i++ )
			cout << a[i][col - t - 1] << endl;    //???? 
		
		if ( col == 2 * t + 1 || row == 2 * t + 1) break;
		
		for ( i = col - t - 2; i >= t + 1; i-- )
			cout << a[row - t - 1][i] << endl;    //???? 
			
		for ( i = row - t - 1; i >= t + 1; i-- )
			cout << a[i][t] << endl;          //???? 
		
		t++; 
	}
	
	return 0;
}