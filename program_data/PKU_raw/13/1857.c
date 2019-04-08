int main ()
{
	int n[20001]={0}, x, i, j;
	cin >> x ;
	for ( i = 1; i <= x; i++ )
		cin >> n[i];
	for ( i = 1; i <= x; i++ )
	{
		for ( j = 1; j <= x; j++ )
			if ( n [i] == n[j] && j > i )
				n [j] = 0;
	}
	cout << n[1] ;
	for ( i=2; i <= x; i++ )
	{
		if ( n[i] != 0 )
			cout << " "<< n[i] ; 
	}
	return 0;
}
