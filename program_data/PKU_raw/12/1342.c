int main ()
{
	int i, j , k  , l ;
	for ( l = 1 ; ; l ++ )
	{
		i = 0 ;
		int a[20] , num = 0;  
		do 
		{
			i ++ ;
			cin >> a[i];
		}while ( a[i] > 0 );
		if ( a[i] == -1 )
		{
			break ;
		}
		else
		{
			for ( j = 1 ; j < i ; j ++ )
			{
				for ( k = 1 ; k < i ; k ++ )
				{
					if ( a[j] == 2 * a[k] )
					{
						num ++;
					}
				}
			}
			cout << num << endl ;
	
		}	
	
	}
	return 0 ; 	
}