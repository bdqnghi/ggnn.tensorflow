 // ???????????
 // ??????
 // ???2010?12?10?
 // ??????????


int main()
{
	char a[110];
	int n , i , j , g[110] = { 0 } ;
	cin.getline( a , 107 ) ;
	char *p = &a[0] ;
	n = strlen( a ) ;
	for ( i = 0 ; i <= n - 1 ; i++ )
	{
		if ( a[i] == ' ' && a[ i - 1 ] == ' ' )
		{
			g[i] = 1 ;
		}
		p = p +  1 ; 
	}
	for ( j = 0 ; j <= n - 1 ; j++ )
	{
		if ( g[j] == 0 )
			cout << a[j] ;
	}
	return 0;
}
