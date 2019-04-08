
int change( int a[][100], int n );

int main()
{
		int n, k = 0;
		int a[100][100], sum = 0;
		int m = 0; //count the number of cut the matrix
		
		cin >> n;
		while ( k < n )
		{
				sum = 0;
			  m = 0;
				for ( int i = 0; i < n; i++ )
				{
					for ( int j = 0; j < n; j++ )
					{
							cin >> a[i][j];
					}
				}
		
				while ( m < n - 1 )
				{
					sum += change( a, n - m );
					
					for ( int i = 0; i < n - m; i++ ) //cut the matrix's colomn
					{
							for ( int j = 2; j < n - m; j++ )
							{
									a[i][j-1] = a[i][j];
							}
					}
					
					for ( int j = 0; j < n - m; j++ ) //cut the matrix's row
					{
							for ( int i = 2; i < n - m; i++ )
							{
									a[i-1][j] = a[i][j];
							}
					}
					m++;
				}	
				
				cout << sum << endl;
				
			k++;
		}

		return 0;
}

int change( int a[][100], int n ) //matrix to zero= =
{
		int minx[100], miny[100]; //minx is the minum of the row, miny is the minum of the column
		int num;
		
		for ( int l = 0; l < 100; l++ )
		{
				minx[l] = INT_MAX;
				miny[l] = INT_MAX;
		}
		
		for ( int i = 0; i < n; i++ )
		{
				for ( int j = 0; j < n; j++ )
				{
						if ( a[i][j] < minx[i] )
							minx[i] = a[i][j];
				}
		}
		
		for ( int i = 0; i < n; i++ )
		{
				for ( int j = 0; j < n; j++ )
				{
						a[i][j] -= minx[i];
				}
		}
		
		for ( int i = 0; i < n; i++ )
		{
				for ( int j = 0; j < n; j++ )
				{
						if ( a[i][j] < miny[j] )
							miny[j] = a[i][j];
				}
		}
		
		for ( int i = 0; i < n; i++ )
		{
				for ( int j = 0; j < n; j++ )
				{
						a[i][j] -= miny[j];
				}
		}
		num = a[1][1];
		return num;
}
