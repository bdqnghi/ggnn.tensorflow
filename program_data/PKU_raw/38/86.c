int main()
{
	int i , j ;
	int n , k , m ;
	double a , t , s ;
	double x[100] = { 0 } ;
	double *p = NULL ;
	cin >> n ;
	for ( k = 0 ; k < n ; k++ )
	{
		t = 0 ;
		cin >> m ;
		p = x ;
		for ( i = 0 ; i < m ; i++ )
		{
			cin >> *(p+i) ;
		}
		a = 0 ;
		for ( i = 0 ; i < m ; i++ )
		{
			a += *(p+i) ;
		}
		a = a / m ;
		for ( i = 0 ; i < m ; i++ )
		{
			t += ( ( *(p+i) - a ) * ( *(p+i) - a ) ) ;
		}
		s = sqrt(t / m) ;
		cout << fixed << setprecision(5) << s << endl ;
	}
	return 0 ;
}