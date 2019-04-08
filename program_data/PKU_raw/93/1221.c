int main()
{
	int a , b , c , x ;
	a = 3 , b = 5 , c = 7 ;
	cin >> x;
	if( x % 105 == 0)
	{
		cout << a << ' ' << b << ' ' << c << endl;
	}
	else 
	{
		if( x % 15 == 0 || x % 35 == 0 || x % 21 == 0 )
		{
				if( x % 15 == 0)
		        cout << a << ' ' << b << endl ;
		        if( x % 35 == 0)
		        cout << b << ' ' << c << endl;
		        if( x % 21 == 0)
		        cout << a << ' ' << c << endl;
		}
		else
		{
			if( x % 3 == 0)
			cout << a << endl;
			if( x % 5 == 0)
			cout << b << endl;
			if( x % 7 == 0)
			cout << c << endl;
			if( x % 3 != 0 && x % 7 != 0 && x % 5 != 0)
			cout << "n" << endl;
		}
	
	}
	return 0;
}