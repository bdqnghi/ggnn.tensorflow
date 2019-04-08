
int a[9][9] = {0}, b[9][9] = {0}; //a????????b????????

void propagate( int m, int n )
{
 	 int k = 0;
 	 int num; //?????? 
 
	 a[4][4] = m;
	 
	 while ( k < n )
	 {
    	 for ( int i = 0; i < 9; i++ )
	 	 {
	   	  	 for ( int j = 0; j < 9; j++ )
	 	 	 {
	 	   	  	 b[i][j] = 0; //????? 
		  	 }
		 }
		 
	  	for (int i = 0; i < 9; i++ )
		{
 		 	for ( int j = 0; j < 9; j++ )
 		 	{
	 	  	 	if ( a[i][j] != 0 )
	 	  	 	{
	 	   	 	   	num = a[i][j];
					a[i][j] = 2 * num;
					b[i-1][j-1] += num;
					b[i-1][j] += num;
					b[i-1][j+1] += num;
					b[i+1][j] += num;
					b[i+1][j+1] += num;
					b[i+1][j-1] += num;
					b[i][j+1] += num;
					b[i][j-1] += num; 
			  	}
		   	}
	 	}
		 
		for ( int i = 0; i < 9; i++ )
		{
 		 	for ( int j = 0; j < 9; j++ )
 		 	{
	 	  	 	a[i][j] += b[i][j];
		   	}
	 	}	  	   
        k++;
  	 }
  	 
  	 for ( int x = 0; x < 9; x++ )
  	 {
   	  	 for ( int y = 0; y < 9; y++ )
		 {
 	 	  	 if ( y == 0 )
				 cout << a[x][y];
			 else if ( y == 8 )
			 	  cout << " " << a[x][y] << endl;
			 else
			 	 cout << " " << a[x][y]; 
   		 } 
	 }
}

int main()
{
 	int m, n;
 	
 	cin >> m >> n;
 	
 	propagate( m, n );
 	
 	return 0;
} 