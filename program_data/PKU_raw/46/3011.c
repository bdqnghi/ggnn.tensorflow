
int main()
{
		int array[110][110], row, col; //????array???row???col
		int x = 0, y = 0; //x???????????????y????? 
		int m = 0, n = 0; //m???????n?????? 
		cin >> row >> col; //??????? 
		

		
		for ( int i = 0; i < row; i++ )
		{
				for ( int j = 0; j < col; j++ )
				{
						cin >> array[i][j]; //?????? 
				}
		}


		while ( n < col && m < row )
		{  
			if ( y >= col - n )
					break;
				while ( y < col - n )
				{
					cout << array[x][y] << endl;
					y++;
				}
				y--;
				x++;
				
					if ( x >= row - m )
					break;
				while ( x < row - m )
				{
					cout << array[x][y] << endl;
					x++;
				}
				x--;
				y--;
			
				if ( y < n )
								break;
				while ( y >= n )
				{
					cout << array[x][y] << endl;
					y--;
				}
				y++;
				x--;
			
					
				m++;
				if ( x < m )
					break;		
				while ( x >= m )
				{
					cout << array[x][y] << endl;
					x--;
				}
				x++;
				y++;
			
					
				n++;
		}

		return 0;	
} 
