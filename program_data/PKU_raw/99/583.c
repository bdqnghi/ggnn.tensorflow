int main()
{
	double n , i , age ;
	double a = 0 , b = 0  , c = 0 , d = 0 ;
	cin >> n ;
	for ( i = 0 ; i < n ; i++ )
	{
		cin >> age ;
		if ( age <= 18 )
		{
			a++ ;
			continue ;
		}
		if ( age > 18 && age <= 35 )
		{
			b++ ;
			continue ;
		}
		if ( age > 35 && age <=60 )
		{
			c++ ;
			continue ;
		}
		if ( age > 60 )
		{
			d++ ;
			continue ;
		}
	}
	cout << "1-18: " << fixed << setprecision(2) << a/n * 100  << "%" << endl ;
	cout << "19-35: " << fixed << setprecision(2) << b/n * 100  << "%" <<  endl ;
	cout << "36-60: " << fixed << setprecision(2) << c/n * 100  << "%" <<  endl ;
	cout << "60??: " << fixed << setprecision(2) << d/n * 100  << "%" <<  endl ;
	return 0 ;
}