
int put( int , int );

int main()
{
	int t , i;
	int m , n; 
	int k;
	
	cin >> t;
	
	for ( i = 1; i <= t; i++ )
	{
		cin >> m >> n;
		k = put(m , n);
		cout << k << endl;
	}
	
	return 0;
}

int put( int x, int y)
{
	if ( x == 0 || y == 1 )
		 return 1;
	else
	{
		if ( x >= y )
			return put (x , y-1) + put( x-y, y );
		if ( x < y )
			return put(x , y-1);
	}
}
