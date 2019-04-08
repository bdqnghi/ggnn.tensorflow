//********************
//**????????**
//**?? 1100012915***
//********11.28*******
//********************

int m, n, i, j ;

int bac( int day, int i, int j )
{
	if ( ( day == 0 ) && ( i == 5 ) && ( j == 5 ) )		//?0? ?????????m?
		return m ;
	else if ( ( i >= 5 - day ) && ( i <= 5 + day ) && 
		( j >= 5 - day ) && ( j <= 5 + day ) )			//?day? ??????? ??????????????????????
		return ( bac(day - 1, i - 1, j - 1) + bac(day - 1, i - 1, j) 
					+ bac(day - 1, i - 1, j + 1) + bac(day - 1, i, j - 1)
					+ bac(day - 1, i, j + 1) + bac(day - 1, i + 1, j - 1)
					+ bac(day - 1, i + 1, j) + bac(day - 1, i + 1, j + 1) 
					+ 2 * bac(day - 1, i, j) ) ;
	else 
		return 0 ;
}

int main()
{
	cin >> m >> n ;
	for ( i = 1; i <= 9; i ++ )
	{
		for ( j = 1; j <= 8; j ++ )
			cout << bac( n, i, j ) << " " ;
		cout << bac( n, i, 9 ) << endl ;
	}
	return 0 ;
}
