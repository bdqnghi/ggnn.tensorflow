int main ()
{
	char a[10001] ;
	int n , i , j , k , t = 0;
	cin >> n ; 
	for ( i = 1 ; i <= n+1 ; i ++ )
	{
		cin.getline(a,10001);
		for ( j = 0 ; a[j] != '\0' ; j ++ )
		{
			t = 0 ;
			for ( k = 0 ; a[k] != '\0' ; k ++ )
			{
				if ( a[k] == a[j] )
				{
					t++;
				}
			}
			if ( t == 1 )
			{
				cout << a[j] << endl ;
				break ;
			}
			else if ( a[j+1] == '\0' )
			{
				cout << "no" << endl ;
			}
		}
	}
	return 0 ; 
}