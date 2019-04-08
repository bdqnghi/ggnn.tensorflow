

signed int function( int n , int k , int last );
int totalmember;
int lastnumber;
int main()
{
	int k,i=1;
	cin>>totalmember>>k;
	lastnumber=0;
	while( i )
	{
		lastnumber++;
		if( function( totalmember , k ,lastnumber ) != -k*(totalmember-1) )
		{
			cout<<function( totalmember , k , lastnumber )<<endl;
			i--;
		}
	}
}


signed int function( int n  , int k , int last )
{
	if( n==1 )
	{
		return( totalmember * last + k );
	}
	else
	{
		if( function ( n-1 , k , last ) % ( totalmember-1 ) == 0 )
		{
			return( totalmember * function( n-1 , k , last ) / ( totalmember-1) + k );
		}
		else
		{
			return( -k*( totalmember-1 ) );
		}
	}
}