
int main ()
{
	int n , p , q , i , j , k , l, s , g ,h ;
	cin>> n ;
	for ( i = 6 ; i <= n ; i = i + 2)
	{
		g = 0;
		for ( j = 3 ; j <= i / 2 ; j = j + 2 )
		{
			p = sqrt( j );
			g = 0 ;
				 for ( k = 1 ; k <= p ; k++ )
				 {
			         if ( ( k != 1 ) && ( ( j % k ) == 0 ) )
					 {
				      g = 1;
				      break;
					 }
				 }
				
		   if ( g == 0 )
		   {
			 s = i - j; 
		     q = sqrt( s );
		     h = 0;
		       for ( l = 1 ; l <= q ; l++ )
			   {
			      if ( ( l != 1 ) && ( ( s % l ) == 0 ) )
				  {
				   h = 1;
				   break;
				  }
			   }
		       if( h == 0)
			   {
			    cout<<i<<"="<<j<<"+"<<s<<endl;
			    break;
			   }
		   }
		}
		
	}
	return 0 ;
}

