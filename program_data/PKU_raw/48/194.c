void Find( int matrix[][9], int n );
int main()
{

	int matrix[ 9 ][ 9 ];
	int i, j;
	int m, n;
	for ( i =0; i < 9; i++ )
	{
		for ( j =0; j < 9; j++ )
			matrix[ i ][ j ] = 0;
	}


	cin >> m >> n;
	
	matrix[ 4 ][ 4 ] = m;
	Find( matrix, n );


	for ( i = 0; i < 9; i++ )
	{
		cout << matrix[ i ][ 0 ];
		for ( j = 1; j < 9; j++ )
		{
			cout <<" " << matrix[ i ][ j ];
		}
		cout << endl;
	}
}
	

void Find( int matrix[][9], int n)
{
	int i, j;
	int temp[9][9];
	memset( temp,0,sizeof(temp));
	if ( n == 0 )
		return;
	for ( i = 1; i < 8; i++ )
	{
		for ( j = 1; j < 8; j++ )
		if ( matrix[ i ][ j ] != 0 )
		{
			temp[ i ][ j ] =  2 * matrix[ i ][ j ]+temp[ i ][ j ]; 

			temp[ i + 1 ][ j ] =  matrix[ i ][ j ] + temp[ i + 1 ][ j ]; 

			temp[ i - 1 ][ j ] = matrix[ i ][ j ] + temp[ i - 1 ][ j ]; 

			temp[ i ][ j + 1 ] =  matrix[ i ][ j ] + temp[ i ][ j + 1 ]; 

			temp[ i ][ j - 1 ] =  matrix[ i ][ j ] + temp[ i ][ j - 1 ]; 
			temp[ i + 1 ][ j - 1 ] =  matrix[ i  ][ j  ] + temp[ i + 1 ][ j - 1 ]; 
			temp[ i + 1 ][ j + 1 ] = matrix[ i  ][ j ] + temp[ i + 1 ][ j + 1 ]; 
			temp[ i - 1 ][ j - 1 ] = matrix[ i ][ j ] + temp[ i - 1 ][ j - 1 ]; 
			temp[ i - 1 ][ j + 1 ] = matrix[ i ][ j ] + temp[ i - 1 ][ j + 1 ]; 
		}
	}

	for ( i = 0; i < 9; i++ )
		for ( j = 0; j < 9; j++ )
			matrix[ i ][ j ] = temp[ i ][ j ];
	Find( matrix, n - 1 );
}
