int main()
{
	char s[50] , w[50] ;
	int i , j ;
	int flag = 0 ;
	cin >> s >> w ;
	int len = strlen(w) ;
	int lenS = strlen(s) ;
	for ( i = 0 ; i < len ; i++ )
	{
		if ( s[0] == w[i] )
		{
			for ( j = 0 ; j < lenS ; j++ )
			{
				if ( s[j] != w[i+j] ) 
				{
					break ;
				}
			}
			if ( j == lenS )
			{
				cout << i ;
				return 0 ;
			}
			else
				continue ;
		}
	}
	return 0 ;
}