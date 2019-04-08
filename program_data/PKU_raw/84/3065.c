int main()
{
	int i  , n , m1 = 0 , m2 = 0 , j = 0 ;
	scanf( "%d" , &n ) ;
	for( i=0; i <n ; i ++)
	{
		scanf( "%d" , &j ) ;
		if( i == 0 )
			m1 = j ;
		else if ( i == 1 )
		{
			m2 = j ;
		}
		
		if( j > m1 )
			{
				m2 = m1 ;
				m1 = j ;
			}
		else if( j > m2  )
			m2 = j ;
		
	}
	printf("%d\n%d" , m1 , m2 ) ;
	return 0;
}
