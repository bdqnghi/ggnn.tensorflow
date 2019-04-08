//********************************
//*???????????   **
//*?????? 1300012861 **
//*???2013.11.01  **
//********************************
int main()
{
	int a[102][102], i, j, k, row, col; 
	cin >> row >> col; 
	for ( i = 0; i < row; i++ )
	{
		for ( j = 0; j < col; j++ )
		{
			cin >> a[i][j]; 
		}
	}
	if ( row <= col )
	{
		if ( row < 2 )
		{
			for ( j = 0; j < col; j++ )
				cout << a[0][j] << endl; 
		}
		if ( row >= 2 )
		{
			for ( i = 0; i < row / 2; i++ )
			{
				for ( j = i; j < col - i; j++ )
				{
					cout << a[i][j] << endl; 
				}
				j--; 
				for ( k = i + 1; k < row - i; k++ )
				{
					cout << a[k][j] << endl; 
				}
				k--; 
				for ( j = j - 1; j >= i; j-- )
				{
					cout << a[k][j] << endl;  
				}
				j++; 
				for ( k = k - 1; k > i; k-- )
				{
					cout << a[k][j] << endl; 
				}
			}
			if ( row % 2 != 0 )
			{
				for ( j = i; j < col - i; j++ )
				{
					cout << a[i][j] << endl; 
				}
			}
		}
	}
	if ( col < row )
	{
		if ( col < 2 )
		{
			for ( i = 0; i < row; i++ )
				cout << a[i][0] << endl; 
		}
		if ( col >= 2 )
		{
			for ( i = 0; i < col / 2; i++ )
			{
				for ( j = i; j < col - i; j++ )
				{
					cout << a[i][j] << endl; 
				}
				j--; 
				for ( k = i + 1; k < row - i; k++ )
				{
					cout << a[k][j] << endl; 
				}
				k--; 
				for ( j = j - 1; j >= i; j-- )
				{
					cout << a[k][j] << endl; 
				}
				j++; 
				for ( k = k - 1; k > i; k-- )
				{
					cout << a[k][j] << endl; 
				}
			}
			if ( col % 2 != 0 )
			{
				for ( k = i; k < row - i; k++ )
				{
					cout << a[k][j+1] << endl; 
				}
			}
		}
	}
	return 0;
}

