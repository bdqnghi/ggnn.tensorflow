char str[90] ;
int main ()
{
	int n , i , j , len ;
	cin >> n ;
	cin.ignore() ;
	for ( i = 0 ; i < n ; i ++ )
	{
		cin.getline ( str , 90 ) ;
		len = strlen(str) ;
		for ( j = 0 ; j < len ; j ++ )
		{
			if (!(
				 (str[0] == '_')
				 || (( str[0] - 'a' >= 0 ) && ( str[0]-'a' < 26 ))
				 || ((str[0] - 'A' >= 0 )&&( str[0] - 'A' < 26))
				 )) break ;
			if (!(
				(( str[j] >= '0' ) && ( str[j] <= '9' ))
				|| (( str[j] - 'a' >= 0 ) && ( str[j]-'a' < 26 ))
				|| ((str[j] - 'A' >= 0 ) && ( str[j] - 'A' < 26))
				|| (str[j] == '_')
				)) break ;
		}
		if ( j == len ) cout << "1" <<endl ;
		else cout << "0" <<endl ;
	}
	return 0;
}