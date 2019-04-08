int main () 
{
	char a[1001];
	int i , j , k , n , b[1001] , r , s ;
	cin.getline(a,1001);
	for ( i = 0 ; a[i] != '\0' ; i ++ )
	{
		b[i] = a[i] - '0' ;
	}
	if ( i == 1 )
	{
		cout << "0" << endl ;
		cout << b[0] << endl ;
	}
	if ( i == 2 )
	{
		cout << (b[0]*10+b[1])/13 << endl;
		cout << (b[0]*10+b[1])%13 << endl ;
	}
	if ( i != 1 && i != 2 )
	{
		r = b[0] * 10 + b[1] ;
		for ( j = 2 ; j < i ; j ++ )
		{
			s = r * 10 + b[j] ;
			if ( s >= 13 )
			{
				cout << s / 13 ;
				r = s % 13 ;
			}
			else
			{
				if ( s >= 10 || r == 0 )
				{
					cout << "0";
				}
				r = s ;
			} 
			if ( j == i - 1 )
			{
				cout << endl << ( s % 13 ) ;
			}
		}
	}
}